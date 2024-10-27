/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:15:56 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/23 14:21:52 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Mais uma vez vamps criar uma classe que herda de outra classe. "Inheritance"
// Isto é só uma inheritance-ception basicamente.

int main() 
{
    ScavTrap scav1;
    scav1.attack("target1");
    scav1.guardGate();
    std::cout << std::endl;

    ScavTrap scav2("Scav_2");
    scav2.attack("target2");
    scav2.guardGate();
    std::cout << std::endl;

    //scav 3 is a copy of scav2 so it will appear in the terminal as scav2.
    ScavTrap scav3(scav2);\
    scav3.attack("target3");
    scav3.guardGate();
    std::cout << std::endl;

    //scav 4 is a copy of scav1 so it will appear in the terminal as scav1.
    ScavTrap scav4;
    scav4 = scav1;  
    scav4.attack("target4");
    scav4.guardGate();
    std::cout << std::endl;

    return 0;
}