/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:27:42 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 15:27:07 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "\033[1;32m\033[2mScavTrap default constructer called.\033[0m" << std::endl;
}

//Iniializa automaticamente um objeto da classe ClapTrap ao criar um scav trap;
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "\033[1;32m\033[2mScavTrap " << this->_name << " constructer called.\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
    *this = other;
    std::cout << " ScavTrap " << this->_name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << " ScavTrap " << this->_name << " assigned." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "\033[1;31m\033[2mScavTrap " << this->_name << " destructor called!.\033[0m" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
    if (this->_energyPoints <= 0) {
        std::cout << "\033[1;33m\033[2mScavTrap " << this->_name << " is out of energy.\033[0m" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " with full force " << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 10;
}

void ScavTrap::guardGate() {
    std::cout << "\033[1;34mScavTrap " << this->_name << " is now in Gate keeper mode.\033[0m" << std::endl;
}