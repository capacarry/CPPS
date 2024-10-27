/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:00:16 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/17 13:02:05 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public: 
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        void setidea(std::string idea, unsigned int i);
        std::string getidea(unsigned int i) const;
    private:
        Brain *_brain;
        void makeSound() const;
};

#endif