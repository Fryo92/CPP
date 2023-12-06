/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:42:37 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 09:12:04 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	
}

Zombie::~Zombie() {
	
	std::cout << this->_name << " died again" << std::endl;	
}

void	Zombie::announce( void ) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}