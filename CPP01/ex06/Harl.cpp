/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:17:33 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 15:07:24 by abiddane         ###   ########.fr       */
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
	
	int	i = 0;
	
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
	
	while (i < 4) {
		if (level == tab[i])
			break ;
		i++;	
	}
	
	switch (i) {
		case 0:
			while (i < 4) {
				(this->*fonctions[i])();
				std::cout << std::endl;
				i++;
			}
			break ;		
		case 1:
			while (i < 4) {
				(this->*fonctions[i])();
				std::cout << std::endl;
				i++;
			}
			break ;		
		case 2:
			while (i < 4) {
				(this->*fonctions[i])();
				std::cout << std::endl;
				i++;
			}
			break ;		
		case 3:
			while (i < 4) {
				(this->*fonctions[i])();
				std::cout << std::endl;
				i++;
			}
			break ;	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;					
	}
}