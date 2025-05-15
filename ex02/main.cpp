/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:10:35 by peli              #+#    #+#             */
/*   Updated: 2025/05/15 11:11:06 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl; 
    }
    Fixed a(10);
    Fixed b(2.5f);
    Fixed c(10);

    std::cout << "== COMPARISON OPERATORS ==" << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= c: " << (a >= c) << std::endl;
    std::cout << "a <= c: " << (a <= c) << std::endl;
    std::cout << "a == c: " << (a == c) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    std::cout << "\n== ARITHMETIC OPERATORS ==" << std::endl;
    Fixed add = a + b;
    Fixed sub = a - b;
    Fixed mul = a * b;
    Fixed div = a / b;

    std::cout << "a + b = " << add << std::endl;
    std::cout << "a - b = " << sub << std::endl;
    std::cout << "a * b = " << mul << std::endl;
    std::cout << "a / b = " << div << std::endl;

    std::cout << "\n== INCREMENT/DECREMENT ==" << std::endl;
    Fixed d;
    std::cout << "d = " << d << std::endl;
    std::cout << "++d = " << ++d << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "d++ = " << d++ << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "--d = " << --d << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "d-- = " << d-- << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n== MIN / MAX ==" << std::endl;
    Fixed x(4.2f);
    Fixed y(42.0f);

    std::cout << "min(x, y) = " << Fixed::min(x, y) << std::endl;
    std::cout << "max(x, y) = " << Fixed::max(x, y) << std::endl;

    const Fixed cx(5.5f);
    const Fixed cy(1.1f);
    std::cout << "min(cx, cy) = " << Fixed::min(cx, cy) << std::endl;
    std::cout << "max(cx, cy) = " << Fixed::max(cx, cy) << std::endl;

    return 0;
}
