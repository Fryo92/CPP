/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:28:15 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 13:01:54 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {

}

HumanB::~HumanB() {
	
}

void	HumanB::attack( void ) {
	if (this->_weapon){
		std::cout << this->_name << std::flush;
		std::cout <<  " attack with their " << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name <<  " has no weapon." << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon) {
	
	this->_weapon = &weapon;
}