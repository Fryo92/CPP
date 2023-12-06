/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:03:07 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 13:38:28 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _integer() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int i ) : _integer(i << _fraction) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : _integer(roundf(f * (1 << _fraction))) {
	std::cout << "Float constructor called" << std::endl;
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

std::ostream& operator<<( std::ostream &out, const Fixed& fixed ) {
	out << fixed.toFloat();
    return out;
}

int	Fixed::getRawBits( void ) const {
	return this->_integer;
}

void	Fixed::setRawBits( int const raw ) {
	this->_integer = raw;
}

int	Fixed::toInt( void ) const {
	return _integer >> _fraction;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(this->_integer) / (1 << this->_fraction);
}