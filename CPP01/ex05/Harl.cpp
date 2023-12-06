/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:17:33 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 14:10:47 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	
}

Harl::~Harl( void ) {
	
}

void	Harl::_debug( void ) {
	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG MESSAGE" << std::endl;
}

void	Harl::_info( void ) {
	
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO MESSAGE" << std::endl;
}

void	Harl::_warning( void ) {
	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING MESSAGE" << std::endl;
}

void	Harl::_error( void ) {
	
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR MESSAGE" << std::endl;
}

void	Harl::complain( std::string level ) {
	
	void	(Harl::* fonctions[4])() = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	const	std::string tab[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (int i = 0; i < 4; i++) {
		if (level == tab[i]) {
			(this->*fonctions[i])();
			return ;
		}
	}
	std::cout << "I WANT TO COMPLAIN !" << std::endl;
}