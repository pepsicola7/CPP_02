/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:22:57 by peli              #+#    #+#             */
/*   Updated: 2025/05/13 14:59:43 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed&	Fixed::operator = (const Fixed& num)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &num)
	{
		this->fixed_point = num.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}
