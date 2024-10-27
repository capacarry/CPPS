/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:27:44 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/10 18:29:59 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//CLasse derivada!!!!
class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other); // Copy constructor
    ScavTrap &operator=(ScavTrap const &other); // Copy assignment operator
    ~ScavTrap();

    void attack(std::string const &target);
    void guardGate();
};
#endif