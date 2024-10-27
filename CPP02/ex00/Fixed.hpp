/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:41:24 by gcapa-pe          #+#    #+#             */
/*   Updated: 2024/09/04 15:21:44 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    //The value of the fixed point number is stored in an integer.
        int _value;
        //The number of fractional bits is fixed at 8.(Numbers after the ".").
        static const int _fractionalBits = 8;
    public:
        Fixed();
        //copy constructor, to copy the object you are using.
        Fixed(const Fixed &fixed);
        //this copy assignment operator (after you have copied the object) lets you assign a new value to the object you are copying.
        //So, when you copy stuff with the copy constuctor, you also need a copy assignment operator to assign new values to the object you are copying.
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        //getRawBits() returns the raw value of the fixed point number.
        int getRawBits(void) const;
        //setRawBits() sets the raw value of the fixed point number.
        void setRawBits(int const raw);
};