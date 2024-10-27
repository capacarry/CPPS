/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:18:59 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 23:59:06 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

    private:
        std::string _type;
    
    public:
    	Weapon();
	    Weapon(std::string);
	    ~Weapon();
        const std::string & getType();
        void setType(std::string type);
};    
    
#endif