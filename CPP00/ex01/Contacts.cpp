/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:10 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/08/27 15:50:10 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts:: Contacts(void){
}

Contacts:: ~Contacts(void){
}

std::string Contacts::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;

    while (!valid) {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    }

    return input;
}

std::string Contacts::_printLen(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contacts::init(void) {
    //std::cin.ignore();
    this->_first_name = this->_getInput("Please enter you first name: ");
    this->_last_name = this->_getInput("Please enter your last name: ");
    this->_nickname = this->_getInput("Please enter your nickname: ");
    this->_phone_number = this->_getInput("Please enter your phone number: ");
    this->_secret = this->_getInput("Please enter your darkest secret: ");
    std::cout << std::endl;
}

void    Contacts::setIndex(int i) {
    this->_index = i;
}

void    Contacts::view(int index) const {
    //if (this->_first_name.empty() || this->_last_name.empty() || this->_nickname.empty())
        //return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_first_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contacts::display(int index) const {
    if (this->_first_name.empty() || this->_last_name.empty() || this->_nickname.empty())
    {   
        std::cout << "\033[31mContact is empty. Input another command.\033[0m" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_first_name << std::endl;
    std::cout << "Last Name:\t" << this->_last_name << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone Number:\t" << this->_phone_number << std::endl;
    std::cout << "Darkest Secret:\t " << this->_secret << std::endl;
    std::cout << std::endl;
}