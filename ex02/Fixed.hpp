/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:29 by peli              #+#    #+#             */
/*   Updated: 2025/05/14 16:26:00 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int	fixed_point;
	static const int	fractional_bits = 8;
public:
Fixed();
Fixed(const Fixed& num);
Fixed& operator=(const Fixed& other);
Fixed(const int i);
Fixed(const float f);
float	toFloat( void ) const;
int	toInt( void ) const;
~Fixed();

// Les fonctions de 6 comparison operators

bool    operator>(const Fixed& other) const;
bool    operator<(const Fixed& other) const;
bool    operator>=(const Fixed& other) const;
bool    operator<=(const Fixed& other) const;
bool    operator==(const Fixed& other) const;
bool    operator!=(const Fixed& other) const;
// les fonctions de 4 arithmetic operators

Fixed operator+(const Fixed& other) const;
Fixed operator-(const Fixed& other) const;
Fixed operator*(const Fixed& other) const;
Fixed operator/(const Fixed& other) const;

//The 4 increment/decrement 

Fixed operator++(int);
Fixed& operator++();
Fixed operator--(int);
Fixed& operator--();

//four public overloaded member functions

static Fixed&	min(Fixed& a, Fixed& b);
static const Fixed& min(const Fixed& a, const Fixed& b);
static Fixed&	max(Fixed& a, Fixed& b);
static const Fixed& max(const Fixed& a, const Fixed& b);
};
std::ostream&	operator<<(std::ostream& out, const Fixed& value);