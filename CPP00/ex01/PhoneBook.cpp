/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:32 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 15:50:32 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook:: PhoneBook(void){

    return;
}

PhoneBook:: ~PhoneBook(void){

    std::cout << "See Ya!" << RED << std::endl;
    return;
}

void    PhoneBook::startup(void) const {
    std::cout << std::endl;
   std::cout << "\033[32mWelcome to Your Awesome PhoneBook\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to exit the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::add(void) {
    static int  i;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void    PhoneBook::printContacts(void) const {
    std::cout << "------------- PHONEBOOK CONTACTS -------------" << std::endl;
    std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << std::endl;
}


int     PhoneBook::_readInput() const {
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input < 8)) {
            valid = true;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "\033[31mInvalid index; please re-enter.\033[0m" << std::endl;
        }
    } while (!valid);
    return (input);
}

void    PhoneBook::search(void) const 
{      
    this->printContacts();
    int i = this->_readInput();
    this->_contacts[i].display(i);
}