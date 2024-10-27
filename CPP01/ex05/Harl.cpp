/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:07:33 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/25 17:14:48 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{   
    std::cout << "\033[3;1;32mHarl constructor called\033[0m" << std::endl;
    return;
}

Harl::~Harl() 
{
    std::cout << "\033[3;1;31mHarl destructor called\033[0m" << std::endl;
    return;
}

void Harl::complain(std::string level)
{
    t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "debug", "info", "warning", "error" };
    
    for (int i = 0; i < 4; ++i) 
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            break;
        }
           
    }
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

