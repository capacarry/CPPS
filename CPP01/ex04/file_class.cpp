/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:09:21 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/26 17:23:23 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_class.hpp"

File_data::File_data(std::string filename) : _inFile(filename)
{   
    //Aparentemente em c++ da para fazer somas de strings 
    this->_outFile = this->_inFile + ".replace";
}


File_data::~File_data ( void ) {
    std::ifstream ifs(this->_inFile.c_str());
}

void File_data::replace(std::string s1, std::string s2) 
{   
    //We open the file to read
    std::ifstream ifs(this->_inFile.c_str());
    //we open the file to write
   std::ofstream ofs(this->_outFile.c_str());
    std::string line;
    //pos will store the position of the first occurrence of s1
    size_t pos = 0;

    if (!ifs.is_open() || !ofs.is_open()) 
    {
        std::cerr << "Could not open file" << std::endl;
        return;
    }
    //we read the file line by line until we reach the end of the file '\0'
    while(std::getline(ifs, line,'\0')) 
    {   
        //we look for the first occurrence of s1( the npos is the end of the string or the 
        //value that indicates that the string we look for is not found is not found)
        while ((pos = line.find(s1)) != std::string::npos) 
        {   
            //if we find the string we replace it with s2 by erasing the string s1 
            //and inserting s2
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find(s2);
        }
        //we write the line in the new file
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}