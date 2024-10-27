/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:07:43 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 17:18:07 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "--WrongAnimal-- constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "--WrongAnimal-- param. constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "--WrongAnimal-- copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return *this;
}

const std::string &WrongAnimal::getType() const
{
    return this->_type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "--WrongAnimal-- destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sounds (Default)!" << std::endl;
}