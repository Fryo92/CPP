/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:03:07 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/15 14:14:50 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _integer() {
}

Fixed::Fixed( const int i ) : _integer(i << _fraction) {
}

Fixed::Fixed( const float f ) : _integer(roundf(f * (1 << _fraction))) {
}

Fixed::~Fixed() {
}

Fixed::Fixed( Fixed const &copy ) {
	this->_integer = copy.getRawBits();
}

Fixed& Fixed::operator=( Fixed const &copy ) {
	if (this == &copy)
		return *this;
	this->_integer = copy.getRawBits();
	return *this;
}

bool Fixed::operator>( Fixed const &other ) const {
	return this->_integer > other.getRawBits();
}

bool Fixed::operator<( Fixed const &other ) const {
	return this->_integer < other.getRawBits();
}

bool Fixed::operator>=( Fixed const &other ) const {
	return this->_integer >= other.getRawBits();
}

bool Fixed::operator<=( Fixed const &other ) const {
	return this->_integer <= other.getRawBits();
}

bool Fixed::operator==( Fixed const &other ) const {
	return this->_integer == other.getRawBits();
}

bool Fixed::operator!=( Fixed const &other ) const {
	return this->_integer != other.getRawBits();
}

Fixed Fixed::operator+( Fixed const &other ) const {
	int temp = (this->_integer + other.getRawBits()) >> this->_fraction;
	return Fixed(temp);
}

Fixed Fixed::operator-( Fixed const &other ) const {
	int temp = (this->_integer - other.getRawBits()) >> this->_fraction;
	return Fixed(temp);
}

Fixed Fixed::operator*( Fixed const &other ) const {
	Fixed temp;
    temp.setRawBits((this->_integer * other.getRawBits()) >> this->_fraction);
    return temp;
}

Fixed Fixed::operator/( Fixed const &other ) const {
	Fixed temp;
    temp.setRawBits((this->_integer << this->_fraction) / other.getRawBits());
    return temp;
}

Fixed& Fixed::operator++() {
	this->_integer++;
	return *this;
}

Fixed& Fixed::operator--() {
	this->_integer--;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator--( int ) {
	Fixed temp = *this;
	--*this;
	return temp;
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

Fixed&	Fixed::min( Fixed& i, Fixed& j ){
	if (i < j)
		return i;
	return j;	
}

Fixed&	Fixed::max( Fixed& i, Fixed& j ){
	if (i > j)
		return i;
	return j;	
}

const Fixed&	Fixed::min( const Fixed& i, const Fixed& j ){
	if (i < j)
		return i;
	return j;	
}

const Fixed&	Fixed::max( const Fixed& i, const Fixed& j ){
	if (i > j)
		return i;
	return j;
}
