/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:46:14 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 09:15:24 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){

}

Contact::~Contact(void){

}

bool	Contact::isNumber(std::string str) const{
	for (unsigned long i = 0; i < str.size(); i++){
		if (std::isdigit(str[i]) == 0)
			return (false);	
	}
	return (true);
}

std::string	Contact::_getInput(std::string str, int toggle) const{
	
	std::string	input = "";
	bool		check = false;
	
	while (!check)
	{
		std::cout << GREEN << str << RESET << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if ((toggle != 0 && isNumber(input) == false))
		{
			std::cin.clear();
			std::cout << RED << "Invalid phone number ! Only digit please." << RESET << std::endl;
		}
		else if (std::cin.good() && !input.empty())
			check = true;
		else
		{
			std::cin.clear();
			std::cout << RED << "Invalid input !" << RESET << std::endl;
		}
	}
	return(input);
}

void	Contact::initContact(int index){
	
	std::cin.ignore();
	this->_index = index + 1;
	this->_firstName = _getInput("Enter a first name : ", 0);
	this->_lastName = _getInput("Enter a last name : ", 0);
	this->_nickname = _getInput("Enter a nickname : ", 0);
	this->_phoneNumber = _getInput("Enter a phone number : ", 1);
	this->_darkestSecret = _getInput("Enter the darkest secret : ", 0);
	return ;
}

std::string	Contact::_tooLarge(std::string str) const{
	
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);	
}

void	Contact::contactList(void) const{
	
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << CYAN << "|" << RESET << std::setw(10) << std::right << this->_index << std::flush;
	std::cout << CYAN << "|" << RESET << std::setw(10) << std::right << _tooLarge(this->_firstName) << std::flush;
	std::cout << CYAN << "|" << RESET << std::setw(10) << std::right << _tooLarge(this->_lastName) << std::flush;
	std::cout << CYAN << "|" << RESET << std::setw(10) << std::right << _tooLarge(this->_nickname) << std::flush;
	std::cout << CYAN << "|" << RESET << std::endl;
}

void	Contact::displayContact(void) const{
	
	std::cout << CYAN << "First Name : " << RESET << this->_firstName << std::endl;
	std::cout << CYAN << "Last Name : " << RESET << this->_lastName << std::endl;
	std::cout << CYAN << "Nickname : " << RESET << this->_nickname << std::endl;
	std::cout << CYAN << "Phone Number : " << RESET << this->_phoneNumber << std::endl;
	std::cout << CYAN << "Darckest Secret : " << RESET << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}