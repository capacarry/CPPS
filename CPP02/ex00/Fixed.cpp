/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:41:21 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/23 14:05:55 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// Neste exercisio é suposto perceber como funciona o copy constructor e o copy assignment operator.
//No que toca a fixed point numbers são números que têm uma parte inteira e uma parte decimal fixa.
//O valor do número fixo é armazenado num inteiro a parte decimal é fixa em 8 bits.
// O copy constructor é usado para copiar o objeto que está a ser usado.
// O copy assignment operator é usado para atribuir um novo valor ao objeto que está a ser copiado.
// O getRawBits() retorna o valor bruto do número fixo.
// O setRawBits() define o valor bruto do número fixo.
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}