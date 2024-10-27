/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:07:36 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/25 17:21:13 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    std::string input;
    Harl harl;
    while(input.compare("exit") != 0 )
    {   

        if (std::cin.eof()) 
        {
            std::cin.clear(); // Clear the EOF flag
            continue; // Optionally continue or break as per your logic
        }
        std::cout << std::endl << "File a complaint:" << std::endl;
        std::cin >> input;
        harl.complain(input);
    }
    
    return(0);
    
}   