/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:09:15 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 19:10:37 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "--WrongCat-- constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "--WrongCat-- destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}