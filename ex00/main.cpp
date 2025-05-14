/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:22:41 by peli              #+#    #+#             */
/*   Updated: 2025/05/14 17:08:14 by peli             ###   ########.fr       */
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
	// // Operator= overload example
	// {
	// 	Fixed a;
	// 	Fixed b;
		
	// 	a.setRawBits(12);
	// 	b.setRawBits(5);
	// 	b = a;
	// 	std::cout << a.getRawBits() << std::endl;
	// 	std::cout << b.getRawBits() << std::endl;
	// }
	
	// // Copy constructor example
	// {
	// 	Fixed a;
	// 	a.setRawBits(12);
		
	// 	Fixed b(a);
	// 	std::cout << a.getRawBits() << std::endl;
	// 	std::cout << b.getRawBits() << std::endl;
	// }
	return (0);
}

