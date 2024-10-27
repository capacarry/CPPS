/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:19:32 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 15:58:34 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string);
	~HumanB();
	void attack();
	void setWeapon(Weapon&);//A com o "&" mudammos os conteudos no objeto Weapon sem fazer uma copia
private:
	Weapon		*_weapon;
	std::string	_name;
};

#endif