/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:07:20 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/17 13:03:19 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "A_Animal.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "--Cat-- constructor called" << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal("Cat")
{
    std::cout << "--Cat-- copy constructor called" << std::endl;
    *this = src;
    _brain = new Brain();
}

Cat &Cat::operator=(const Cat &src) 
{
    std::cout << "--Cat-- assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        for (int i = 0; i < 100; i++)
            this->_brain->ideas[i] = src._brain->ideas[i];
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "--Cat-- destructor called" << std::endl;
    delete _brain;
}

void Cat::setidea(const std::string &idea, unsigned int i)
{
    if (i >= 100)
        return;
    this->_brain->ideas[i] = idea;
}

std::string Cat::getidea(unsigned int i) const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->_brain->ideas[i] << std::endl;
    return this->_brain->ideas[i];
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}