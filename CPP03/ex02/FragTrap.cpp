/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:28:51 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/08 14:03:16 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "\033[92m" << "FragTrap default constructor called" << "\033[0m" << std::endl;
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "\033[92m" << "FragTrap string constructor called" << "\033[0m" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap( FragTrap const &copy) {
	std::cout << "\033[92m" << "FragTrap copy constructor called" << "\033[0m" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energypoints = copy._energypoints;
	this->_attackdamage = copy._attackdamage;
}

FragTrap::~FragTrap() {
	std::cout << "\033[31m" << "FragTrap " << _name << " destroyed" << "\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << this->_name << " makes you a high five !" << std::endl;
}