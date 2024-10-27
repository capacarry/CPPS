/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:59:25 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 19:29:32 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


//Pelo que percebi deste exercicio é que temos de criar uma classe base e duas classes derivadas
//e depois criar um ponteiro para a classe base e instanciar(criar um objeto de uma classe.) as classes derivadas.
//Depois temos de chamar a função makeSound() que é virtual e que vai chamar a função makeSound() da classe derivada
// Em seguida temos de criar uma WrongAnimal e uma WrongCat e fazer o mesmo que fizemos com as classes derivadas.
// Basicamente só para ver a diferença entre usar uma função virtual e uma função normal.

//FUNÇÃO NORMAL: é definida na classe base e é chamada a função da classe base. Não pode ser redefinida nas classes derivadas.
//FUnção VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Pode ser redefinida nas classes derivadas.
//FUnção PURA VIRTUAL: é definida na classe base e é chamada a função da classe derivada. Tem de ser redefinida nas classes derivadas.
//esta ultima não foi usada neste exercicio e faz com que a classe base seja uma classe abstrata. (não pode ser instanciada).
//Bué trabalho á toa mas pronto.
int main()
{   
    {
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound(); // will output the dog sound!
		meta->makeSound(); // will output the default sound!
		delete meta;
		delete i;
		delete j;
    }
    //we use {} to limit the scope of the objects didnt know that this was possible
    {
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
    }
    return 0;
}
