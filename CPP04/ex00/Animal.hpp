/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:00:11 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 18:58:10 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

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