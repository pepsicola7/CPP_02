/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:22:41 by peli              #+#    #+#             */
/*   Updated: 2025/04/29 19:45:19 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return;
}

// Default constructor called
// Copy constructor called
// Copy assignment operator called // <-- This line may be missing depending on your implementation
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called