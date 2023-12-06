/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:13:29 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 15:13:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "WrongCat";
    std::cout <<"WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
    if (this == &other) {
		return *this;
	}
	this->_type = other._type;
	return *this;
}

void    WrongCat::makeSound( void ) const {
   std::cout << "Meow" << std::endl;
}
