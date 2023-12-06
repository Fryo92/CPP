/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:59:53 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 12:59:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "AAnimal destroyed" << std::endl;
}

Animal::Animal( const Animal& copy ) {
	 std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& other) {
	if (this == &other) {
		return *this;
	}
	this->_type = other._type;
	return *this;
}

void	Animal::makeSound( void ) const{
	std::cout << "Animal makes sound sometimes" << std::endl;	
}

std::string	Animal::getType( void ) const{
	return (this->_type);
}