/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:59:25 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/28 18:48:45 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

//FUNÇÃO NORMAL: é definida na classe base e é chamada a função da classe base. Não pode ser redefinida nas classes derivadas.
//FUnção VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Pode ser redefinida nas classes derivadas.
//FUnção PURA VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Tem de ser redefinida nas classes derivadas.
//esta ultima não foi usada neste exercicio e faz com que a classe base seja uma classe abstrata. (não pode ser instanciada).
//Bué trabalho á toa mas pronto.
#include "Cat.hpp"
#include "Dog.hpp"


#include <iostream>
#include <cmath>

int	main(void)
{ 

  //BRAINS AND ANIMALS TEST
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal	*arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		delete arr[i];
	}

  // IDEA ASSIGNATION TEST
  
	// Cat	*k = new Cat();
	// Cat *l = new Cat();
	// *l = Cat(*k);
	// l->setidea("hello",0);
  // l->setidea("my dude",1);
  // l->setidea(" how you",2);
  // l->setidea("doing?",3);
  // k->setidea("Not much",0);
  // k->setidea("how about u?",1);
  // k->setidea("chillin?",2);
  

  // int f=0;
  // while(f <= 4)
  // {
  // 	std::cout << l->getidea(f) << std::endl;
  //   f++;
  // }

  //  f= 0;
  
  // while(f <= 3)
  // {
  // 	std::cout << k->getidea(f) << std::endl;
  //   f++;
  // }
  // delete k;
  // delete l;
  
	return 0;
}
