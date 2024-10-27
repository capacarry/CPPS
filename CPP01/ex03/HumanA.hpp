/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:19:32 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 15:48:44 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include "string"

class HumanA{
public:
    //constructor with reference to Weapon
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack();
private:
	std::string _name;
	Weapon &_weapon;
};

#endif