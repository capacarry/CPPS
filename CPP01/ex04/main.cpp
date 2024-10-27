/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:04:20 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/25 17:03:32 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_class.hpp"

int main ( int ac, char **av )
{
    if (ac != 4) 
    {
        std::cerr << "Wrong number of args." << std::endl;
        return(1);
    } 
    else 
    {
        //create an instance of the class File_data and pass the filename as an argument
        //creating an output file with the name of the input file + .replace
        File_data   File_data_2(av[1]);
        //Damn straight my dude we be replacing the strings
        File_data_2.replace(av[2], av[3]);
    }
    return(0);
}