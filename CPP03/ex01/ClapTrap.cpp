/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:31:17 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 15:26:18 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(3)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "\033[31mClapTrap " << _name << " destructor called!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other_claptrap) {
    *this = other_claptrap;
    std::cout << "\033[32mCopy constructor called!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other_claptrap) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other_claptrap)
    {
        this->_name = other_claptrap._name;
        this->_hitPoints = other_claptrap._hitPoints;
        this->_energyPoints = other_claptrap._energyPoints;
        this->_attackDamage = other_claptrap._attackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target) 
{
    if (_energyPoints <= 0 )
    {
        std::cout << "\033[33;2mClapTrap \033[0m" << _name << "\033[33;2m is out of energy points!\033[0m" << std::endl;
        return;
    }
    else
        std::cout << "\033[31;5mClapTrap\033[0m " << _name << "\033[31;5m attacks\033[0m" << target << "\033[31;5m, causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
    _energyPoints -= 1;
}


void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " takes \033[31m" << amount << "\033[0m damage!" << std::endl;
        std::cout << "\033[33;2mClapTrap " << _name << " is out of hit points and is dead!\033[0m" << std::endl;
        _hitPoints = 0;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes \033[31m" << amount << "\033[0m damage!" << std::endl;
    this->_hitPoints = this->_hitPoints - amount;
    //std::cout << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints <= 0)
    {
        std::cout << "\033[33;2mClapTrap " << _name << " is out of energy!\033[0m" << std::endl;
        return;
    }
    std::cout << "\033[34;1mClapTrap " << _name << " repairs itself for " << amount << " hit points!\033[0m" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}