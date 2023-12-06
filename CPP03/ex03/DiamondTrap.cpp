/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:12:17 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/09 10:33:38 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default"), ScavTrap("Default"), FragTrap("Default") {
	std::cout << "\033[92m" << "DiamondTrap default constructor called" << "\033[0m" << std::endl;
	_name = "Default";
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energypoints = ScavTrap::_energypoints;
    this->_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap( std::string name ) {
	std::cout << "\033[92m" << "DiamondTrap string constructor called" << "\033[0m" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_trap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const &copy) {
	std::cout << "\033[92m" << "DiamondTrap copy constructor called" << "\033[0m" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energypoints = copy._energypoints;
	this->_attackdamage = copy._attackdamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[31m" << "DiamondTrap " << _name << " destroyed" << "\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target) {
	std::cout << "Called by Diamond: ";
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "ClapTrap name : " << ClapTrap::_name << ", DiamonTrap name : " << this->_name << std::endl;
}

void	DiamondTrap::status( void ) const {
	std::cout << "\033[93m" << "STATUS : Name: " << this->_name << " / Hit points: " << this->_hitpoints \
	<< " / Energy points: " << this->_energypoints << " / Attack damage: " \
	<< this->_attackdamage << "\033[0m" << std::endl;
}
