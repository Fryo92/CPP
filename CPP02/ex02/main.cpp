/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:17:33 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/07 12:03:26 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a(8);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	Fixed c(2);

	std::cout << (a - c)<< std::endl;
	std::cout << a + c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;
	std::cout << (a < c ? "True" : "False") << std::endl;
	std::cout << (a > c ? "True" : "False") << std::endl;
	std::cout << (a >= c ? "True" : "False") << std::endl;
	std::cout << (a <= c ? "True" : "False" )<< std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a  << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}