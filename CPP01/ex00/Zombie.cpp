/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:59:55 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 17:20:41 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{   
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}