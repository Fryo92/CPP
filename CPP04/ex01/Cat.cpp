/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:00:03 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 13:00:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destroyed" << std::endl;
	delete  this->_brain;
}

Cat::Cat( Cat& copy) {
	 std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& other) {
	if (this == &other) {
		return *this;
	}
	this->_type = other._type;
	this->_brain = new Brain( *other._brain );
	return *this;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meow" << std::endl;	
}
