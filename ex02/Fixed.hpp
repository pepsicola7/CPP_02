/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:29 by peli              #+#    #+#             */
/*   Updated: 2025/05/13 17:24:34 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#progma once
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