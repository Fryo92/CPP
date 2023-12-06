/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:27:29 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 16:30:47 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	
}

Weapon::Weapon( std::string	type ) : _type(type) {
	
}

Weapon::~Weapon() {
	
}

std::string&	Weapon::getType( void ) {
	
	std::string&	typeRef = this->_type;
	return typeRef;
}

void			Weapon::setType( std::string value ) {
	
	this->_type = value;
}