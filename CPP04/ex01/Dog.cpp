/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:07:27 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 18:39:41 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "--Dog-- constructor called" << std::endl;
    _brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal("Dog")
{
    std::cout << "--Dog-- copy constructor called" << std::endl;
    _brain = new Brain(*src._brain); 
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "--Dog-- assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

void Dog::setidea(std::string idea, unsigned int i)
{
    if (i >= 100)
        return;
    this->_brain->ideas[i] = idea;
}

std::string Dog::getidea(unsigned int i) const
{
    return this->_brain->ideas[i];
}

Dog::~Dog()
{
    std::cout << "--Dog-- destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}