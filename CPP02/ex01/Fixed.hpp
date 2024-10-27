/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:41:24 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/06 18:13:54 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &rhs );
    //here we are overloading the assignment operator "=" to copy the value of the right hand side object to the left hand side object.
    //so the "=" isnt an assignment operator, it is an overloading operator. In the context of the class is different.
    //Não posso fazer Fixed a = b; porque o construtor de cópia é explicito, logo tenho de fazer Fixed a(b);
    //Confuso pa caraças, mas é isto.
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif 
