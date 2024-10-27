/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:19:32 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 15:51:17 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{	
	std::cout << "	-- HumanB constructor called. -- "<< std::endl;
	_name = name;
}

void HumanB::setWeapon(Weapon &a)
{
	_weapon = &a;
}

HumanB::~HumanB()
{	
	std::cout << "-- HumanB destructor called. -- "<< std::endl;
    return;
}

void HumanB::attack()
{	
	if(_weapon)
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
	else
		std::cout << "INVALID: No weapon selected!" << std::endl;
	return;
}