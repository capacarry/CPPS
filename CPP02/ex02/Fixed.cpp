/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:41:21 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 16:06:58 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//Neste exercisio é suposto á semelhança do anterior perceber como funciona o copy constructor e o copy assignment operator.
// Mas também temos de perceber como funcionam os overload operators.
//overload operators permitem que possamos usar operadores com objetos e mudar o seu comportamento.
//Por exemplo podemos usar o operador "+" para somar dois objetos, ou seja, invejes de somar os valores dos objetos, podemos somar os valores brutos dos objetos.
//Outro exemplo é o operador "++" que incrementa o valor do objeto em 1.
//Ex:
//Fixed a(5);
//Fixed b(5);
//Fixed c = a + b; //c vai ser igual a 10.

Fixed::Fixed(void) : _fixedPointValue(0) {
     //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedPointValue( n << _fractionalBits ) {
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedPointValue( roundf( n * ( 1 << _fractionalBits ) ) ) {
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs ) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return this->_fixedPointValue;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}


bool    Fixed::operator>( const Fixed &rhs ) const {
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator<( const Fixed &rhs ) const {
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator>=( const Fixed &rhs ) const {
    return this->getRawBits() >= rhs.getRawBits();
}

bool   Fixed::operator<=( const Fixed &rhs ) const {
    return this->getRawBits() <= rhs.getRawBits();
}

bool  Fixed::operator==( const Fixed &rhs ) const {
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator!=( const Fixed &rhs ) const {
    return this->getRawBits() != rhs.getRawBits();
}


Fixed   Fixed::operator+( const Fixed &rhs ) const {
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &rhs ) const {
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &rhs ) const {
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &rhs ) const {
    return Fixed( this->toFloat() / rhs.toFloat() );
}


Fixed&   Fixed::operator++( void ) {
    ++this->_fixedPointValue;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue--;
    return tmp;
}


Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}