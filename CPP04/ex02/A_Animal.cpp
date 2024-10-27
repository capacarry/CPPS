/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:07:24 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/17 13:03:07 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

// Default constructor
Animal::Animal() : _type("Animal")
{
    std::cout << "--Animal-- constructor called" << std::endl;
}

// Parameterized constructor
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "--Animal-- constructor called" << std::endl;
}

// Copy constructor
Animal::Animal(Animal const &src)
{   
    std::cout << "--Animal-- copy constructor called" << std::endl;
    *this = src;
}

// Assignment operator
Animal &Animal::operator=(const Animal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return *this;
}

// Destructor
Animal::~Animal()
{
    std::cout << "--Animal-- destructor called" << std::endl;
}

std::string Animal::getType() const
{   
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sounds (Default)!" << std::endl;
}