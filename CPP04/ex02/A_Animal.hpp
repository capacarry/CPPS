/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:00:11 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 21:31:51 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
//we need to include the Brain.hpp file in order to use the Brain class in the Animal class
class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        virtual  ~Animal();
        Animal(Animal const &src);
        Animal &operator=(const Animal &src);

        std::string getType() const;
        //Now my class is abstract because it has a pure virtual function :)
        //the 0 at the end of the function declaration makes it a pure virtual function
        //which means that the class is abstract and cannot be instantiated.
        virtual void makeSound() const = 0;
};

#endif