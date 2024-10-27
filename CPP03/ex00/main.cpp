/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:15:56 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 15:25:12 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Neste exercisio temos de criar uma classe que herda de outra classe. "Inheritance"
//A classe que herda é chamada de subclasse e a classe que é herdada é chamada de classe base.
//As subclasses herdam todos os membros da classe base, exceto os construtores e destrutores.
//quando destruir um objeto da subclasse, o destrutor da classe base é chamado automaticamente
// de forma invertida.
//A subclasse pode ter os seus próprios construtores e destrutores.
//A subclasse pode ter os seus próprios métodos e atributos.

int main( void )
{
    ClapTrap    clap1("MARCELO R DE SOUSA");
    ClapTrap    clap2("MOEDAS");
    
    
    clap1.attack("MOEDAS");
    clap2.takeDamage(5);
    clap2.beRepaired(2);
    clap2.attack(" MARCELO R DE SOUSA");
    clap1.takeDamage(5);
    clap2.attack(" MARCELO R DE SOUSA");
    clap1.beRepaired(5);
    clap1.takeDamage(5);
    clap2.attack(" MARCELO R DE SOUSA");
    clap1.takeDamage(5);
 
 
 
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    clap1.attack("MOEDAS");
    return 0;
}