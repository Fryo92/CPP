/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:27:52 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 14:06:00 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon){

}

HumanA::~HumanA() {
	
}

void	HumanA::attack( void ) {

		std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
