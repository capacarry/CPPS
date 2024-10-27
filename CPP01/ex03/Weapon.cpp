/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:19:01 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 23:59:01 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    this->_type = "Knife";
}

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::~Weapon() {
    return;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
const std::string & Weapon::getType() {
    return this->_type;
}