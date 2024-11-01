/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:31:17 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/10 19:33:39 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap - " << this->_name << " has been born." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap - " << this->_name << " has been destroyed." << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap - " << this->_name << " has been copied with copy constuctor." << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "ClapTrap - " << this->_name << " has been copied with copy assignment operator." << std::endl;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap - " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap - " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap - " << this->_name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap - " << this->_name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap - " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap - " << this->_name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}