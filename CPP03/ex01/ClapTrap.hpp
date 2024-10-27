/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:31:07 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 15:28:17 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


//Classe base!!!!!!
class ClapTrap
{
    //temos que declarar os atributos como protected para que as classes derivadas possam aceder a eles.
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
        
        ClapTrap();
    public:
        //constructor with name
        ClapTrap(const std::string name);

        //destructor
        ~ClapTrap();
        
        //copy and assignation constructors
        ClapTrap(const ClapTrap& other_claptrap);
        ClapTrap& operator=(const ClapTrap& other_claptrap);
        
        //actions
        //Queria usar o virtual mas não dá no c++98 :(
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif