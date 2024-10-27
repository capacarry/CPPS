/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:37:40 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/27 16:18:27 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void ) {
    Fixed        a;
    Fixed const  b( Fixed( 5.05f ) * Fixed( 2 ) );

    //Scaling Factor= 2^8=256 
    // a = 0;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
     //1/256=0.00390625
     //Porque foi incrementado por 1;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::min( a, b ) << std::endl;

    return 0;
}