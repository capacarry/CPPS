/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:15:56 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 15:31:12 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Mais uma vez um caso de inheritance-ception só que desta vez com mais um nível de inheritance
//porque a classe FragTrap herda da classe ClapTrap e a classe ScavTrap herda da classe ClapTrap.

int main( void )
{   
    
    FragTrap joe( "Joe Biden 1" );
    FragTrap joe2(joe);

    joe.attack( "Trump" );
    joe.takeDamage( 10 );
    joe.beRepaired( 10 );
    joe.highFivesGuys();

    return 0;
}