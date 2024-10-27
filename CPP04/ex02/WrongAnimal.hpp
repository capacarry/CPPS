/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:07:45 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/12 19:18:33 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{   
    protected:
        std::string _type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);
        void makeSound() const;
        const std::string &getType(void) const;
};

#endif