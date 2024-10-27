/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:59:25 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/17 13:15:56 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "A_Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

//FUNÇÃO NORMAL: é definida na classe base e é chamada a função da classe base. Não pode ser redefinida nas classes derivadas.
//FUnção VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Pode ser redefinida nas classes derivadas.
//FUnção PURA VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Tem de ser redefinida nas classes derivadas.
//esta ultima não foi usada neste exercicio e faz com que a classe base seja uma classe abstrata. (não pode ser instanciada).
//Bué trabalho á toa mas pronto.
int main()
{ 
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
  
	Animal *Cats_and_Dogs[100];


    for (int i = 0; i < 50; i++) {
      Cats_and_Dogs[i] = new Cat();
    }

    for (int i = 50; i < 100; i++) {
      Cats_and_Dogs[i] = new Dog();
    }

    for (int i = 0; i < 100; i++) {
      delete Cats_and_Dogs[i];
    }
	
  return (0);
}
