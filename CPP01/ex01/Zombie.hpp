/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:59:57 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 15:59:47 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
    //constructor and destructor... constructor receives the name of the zombie.
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
        void setZombieName(std::string name);
};

    Zombie* zombieHorde( int N, std::string name );//Fora da classe para trabalhar com varios objetos da classe zombie
#endif