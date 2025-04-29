/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:22:57 by peli              #+#    #+#             */
/*   Updated: 2025/04/29 19:45:19 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int	bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& num)
{
	fixed_point = int(num.fixed_point);
}

Fixed&	Fixed::operator = (const Fixed& num)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &num)
	{
		this->fixed_point = num.fixed_point;
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

}

void	Fixed::setRawBits( int const raw )
{

}

// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.