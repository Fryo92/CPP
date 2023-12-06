/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:03:07 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 13:37:52 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _integer(){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_integer = copy.getRawBits();
}

Fixed& Fixed::operator=( Fixed const &copy ) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_integer = copy.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_integer;
}

void	Fixed::setRawBits( int const raw ) {
	this->_integer = raw;
}

