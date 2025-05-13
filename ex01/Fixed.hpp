/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:43:07 by peli              #+#    #+#             */
/*   Updated: 2025/05/13 15:55:20 by peli             ###   ########.fr       */
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
	~Fixed();
	Fixed(const Fixed& num);
	Fixed& operator=(const Fixed& other);
	Fixed(const int i);
	Fixed(const float f);
	float toFloat( void ) const;
	int toInt( void ) const;
};
std::ostream&	operator<<(std::ostream& out, const Fixed& value);

