/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:39 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/18 13:49:29 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <iomanip>

class Contacts{

    private:
        std::string  _first_name;
        std::string  _last_name;
        std::string  _nickname;
        std::string  _phone_number;
        std::string  _secret;
        int          _index;
        /*functions*/
        std::string _getInput(std::string str) const;
        std::string _printLen(std::string str) const;
    public:
        /*Construct and Desctruct */
        Contacts(void);
        ~Contacts(void);
        /*Functions*/
        void    view(int index) const;
        void    init(void);
        void    setIndex(int i);
        void    display(int index) const;
    
};

#endif