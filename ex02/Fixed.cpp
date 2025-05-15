/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:33:52 by peli              #+#    #+#             */
/*   Updated: 2025/05/15 11:10:22 by peli             ###   ########.fr       */
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
}

Fixed::Fixed(const Fixed& num)
{
	*this = num;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->fixed_point = other.fixed_point;
	return *this;
}

Fixed::Fixed(const int i)
{
	fixed_point = i * (1 << fractional_bits);
}

Fixed::Fixed(const float f)
{
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
    return Fixed((this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed((this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed((this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed((this->toFloat() / other.toFloat()));
}

//The 4 increment/decrement 

Fixed Fixed::operator++(int)
{
	Fixed temps = *this;
	this->fixed_point += 1;
    return Fixed(temps);
}

Fixed& Fixed::operator++()
{
	this->fixed_point += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temps = *this;
	this->fixed_point -= 1;
    return Fixed(temps);
}


Fixed& Fixed::operator--()
{
	this->fixed_point -= 1;
	return (*this);
}

//four public overloaded member functions

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return (b);
	else
		return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point < b.fixed_point)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.fixed_point < b.fixed_point)
		return (b);
	else
		return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return (a);
	else
		return (b);
}

// int *i = 7;
// int j = *i;
