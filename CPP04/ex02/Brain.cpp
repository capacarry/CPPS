/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:49:38 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 20:21:06 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "--Brain-- constructor called" << std::endl;
    
}

Brain::~Brain()
{
    std::cout << "--Brain-- destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "--Brain-- copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "--Brain-- assignation operator called" << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = src.ideas[i];
    }
    return *this;
}
