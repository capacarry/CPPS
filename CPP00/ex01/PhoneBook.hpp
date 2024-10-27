/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:39 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 15:50:39 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include "Contacts.hpp"

#ifndef COLOURS_H
#define COLOURS_H
    
    const std::string GREEN = "\033[32m";
    const std::string BLUE = "\033[34m"; 
    const std::string RED = "\033[31m";
    const std::string RESET = "\033[0m";

#endif

class PhoneBook{

    private:
        Contacts _contacts[8];
        int     _readInput() const;

    public:
        /* Construct  and Destruct*/
        PhoneBook(void);
        ~PhoneBook(void);
        /*Functions*/
       void  startup(void) const;
       void  add(void);
       void  search(void) const;
       void  printContacts(void) const;
};

#endif