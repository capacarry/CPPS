/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:19:32 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 15:51:12 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

//this construtor intiliazes the weapon with the reference of the weapon pasFile_data as argument!!! confuso pa crlh
HumanA::HumanA(std::string name, Weapon &newWeapon) : _weapon(newWeapon)
{	
	std::cout << "	-- HumanA constructor called. -- "<< std::endl;
	_name = name;
}

HumanA::~HumanA()
{
	std::cout << " -- HumanA destructor called. -- "<< std::endl;
}

void HumanA::attack()
{	
		std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}