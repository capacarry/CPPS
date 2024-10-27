/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:07:29 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/29 13:54:05 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string.h>
#include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();
        
    void complain(std::string level);
};

//this struct is used to store the function pointers. This lets me call the functions using the array of function pointers.
//Since i cant use (if else, if else etc...) to call the functions, i use the array of function pointers to call the functions.
typedef void (Harl::*t_func) ( void );

#endif