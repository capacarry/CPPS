/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:07:20 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 18:39:33 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "--Cat-- constructor called" << std::endl;
    _brain = new Brain();
}


Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "--Cat-- copy constructor called" << std::endl;
    _brain = new Brain(*src._brain); 
}

Cat &Cat::operator=(const Cat &src) 
{
    std::cout << "--Cat-- assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        delete _brain;
        _brain = new Brain(*src._brain);
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
    return this->_brain->ideas[i];
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}