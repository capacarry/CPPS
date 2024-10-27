/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:00:11 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 19:55:36 by gcapa-pe         ###   ########.fr       */
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
        virtual void makeSound() const;
};

#endif