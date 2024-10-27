/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:22 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 15:50:22 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>

int main (void)
{
    PhoneBook data;
    std::string input = "";
    data.startup();

    while(input != "EXIT")
    {       
        std::getline(std::cin, input);
            if(input == "ADD")
                data.add();
            else if( input == "SEARCH")
            {
                data.search();
            }
            else if(input == "EXIT")
                break;
            else if(std::cin.eof())
               std::exit(1);
            else if(input.empty())
                std::cin.clear();
            else
                std::cout << "\033[31mInvalid input; please try again.\033[0m" << std::endl;
    }   
    return(0);
}