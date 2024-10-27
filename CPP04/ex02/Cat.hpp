/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:00:09 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/17 13:02:15 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        void setidea(const std::string &idea, unsigned int i);
        std::string getidea(unsigned int i) const;
        
    private:
        Brain *_brain;
        void makeSound() const;
};

#endif