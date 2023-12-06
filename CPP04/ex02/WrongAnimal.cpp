/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:07:15 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 15:07:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
    std::cout <<"WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
    if (this == &other) {
		return *this;
	}
	this->_type = other._type;
	return *this;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal makes sound sometimes" << std::endl;
}

std::string    WrongAnimal::getType( void ) const {
    return this->_type;
}