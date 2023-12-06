/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:45:50 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 09:13:27 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <limits>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

}

PhoneBook::~PhoneBook(void){

}

void	PhoneBook::addContact(void) {
	
	static int	index;
	
	this->_contact[index % 8].initContact(index % 8);
	index++;
}

void	PhoneBook::viewList(void) const{
	
	std::cout << CYAN << "__________________CONTACTS__________________" << RESET <<std::endl;
	for (int i = 0; i < 8; i++)
		this->_contact[i].contactList();
	std::cout << std::endl;	
}

void	PhoneBook::getContact(void) const{
	
	int		index;
	bool	check = false;
	
	while (!check){
		std::cout << GREEN << "Enter contact index : " << RESET <<std::flush;
		std::cin >> index;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (std::cin.good() && index > 0 && index < 9)
		{
			std::cout << std::endl;
			check = true;
			this->_contact[index - 1].displayContact();
		}
		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << RED << "Invalid index ! Must be between 1 and 8." << RESET << std::endl;
		}
	}
}