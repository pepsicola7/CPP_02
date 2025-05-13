/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:23 by peli              #+#    #+#             */
/*   Updated: 2025/05/13 18:11:48 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream&	operator<<(std::ostream& out, const Fixed& value) 
{
	out << value.toFloat();
	return out;
}

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& num)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed_point = other.fixed_point;
	return *this;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = i * (1 << fractional_bits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(f * (1 << fractional_bits));
}

float	Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (1 << fractional_bits));
}

int	Fixed::toInt( void ) const
{
	return ((int)fixed_point / (1 << fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Les fonctions de 6 comparison operators

bool    Fixed::operator>(const Fixed& other) const
{
    return this->fixed_point > other.fixed_point;
}

bool    Fixed::operator<(const Fixed& other) const
{
    return this->fixed_point < other.fixed_point;
}

bool    Fixed::operator>=(const Fixed& other) const
{
    return this->fixed_point >= other.fixed_point;
}

bool    Fixed::operator<=(const Fixed& other) const
{
    return this->fixed_point <= other.fixed_point;
}

bool    Fixed::operator==(const Fixed& other) const
{
    return this->fixed_point == other.fixed_point;
}

bool    Fixed::operator!=(const Fixed& other) const
{
    return this->fixed_point != other.fixed_point;
}

// les fonctions de 4 arithmetic operators

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed((this->toFlot() + other.toFlot()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed((this->toFlot() - other.toFlot()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed((this->toFlot() * other.toFlot()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed((this->toFlot() / other.toFlot()));
}

//The 4 increment/decrement 

Fixed Fixed::operator++()
{
    return Fixed((this->toFlot() + ));
}