/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:04:17 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/25 16:59:20 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CLASS_HPP
#define FILE_CLASS_HPP

#include <string>
#include <iostream>
#include <fstream>

class File_data
{
    public:
        File_data(std::string filename);
        ~File_data();
        void replace(std::string s1, std::string s2);
        
    private:
        std::string _inFile;
        std::string _outFile;
        
};

#endif