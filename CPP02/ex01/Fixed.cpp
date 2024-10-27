/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:41:21 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/23 14:11:39 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


//A diferença entre este exercicio e o anterior é que neste temos de converter um float para um número fixo.
//fazemos isto multiplicando o float por 2^8 (256) e arredondando o resultado.
//Porque é que temos de arredondar o resultado? Porque o número fixo tem uma parte decimal fixa de 8 bits.
//2^8 porque temos 8 bits para a parte decimal e 2 porque é um número binário.
//256 porque 2^8 = 256, logo 1 bit é 1/256 que é 0.00390625 mas em binário.

//O que vai acontecer na prática é que o número vai ser truncado, ou seja, vai ser arredondado para baixo.
//Por exemplo, se tivermos 0.00390625 vai ser arredondado para 0.
//Se tivermos 0.00390626 vai ser arredondado para 1.

Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedPointValue( n << _fractionalBits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedPointValue( roundf( n * ( 1 << _fractionalBits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
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