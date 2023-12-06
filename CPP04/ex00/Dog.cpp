/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:59:59 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 12:59:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog( Dog& copy) {
	 std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& other) {
	if (this == &other) {
		return *this;
	}

	this->_type = other._type;

	return *this;
}

void	Dog::makeSound( void ) const{
	std::cout << "Woof" << std::endl;	
}