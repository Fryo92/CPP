/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:12:35 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:16:00 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energypoints(10), _attackdamage(0) {
	std::cout << "\033[92m" << "ClapTrap default constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0) {
	std::cout << "\033[92m" << "ClapTrap string constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &copy ) {
	std::cout << "\033[92m" << "ClapTrap copy constructor called" << "\033[0m" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energypoints = copy._energypoints;
	this->_attackdamage = copy._attackdamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[31m" << "ClapTrap " << _name << " destroyed" << "\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return (*this);
}

std::string	ClapTrap::getName( void ) const {
	return this->_name;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return this->_attackdamage;
}


void ClapTrap::attack(const std::string& target) {
	if (this->_hitpoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead. He can't attack !" << std::endl;
		return ;
	}
	if (this->_energypoints == 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy. He can't attack !" << std::endl;
		return ;
	}
	this->_energypoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " \
	<< this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints == 0) {
		std::cout << this->_name << " is dead. He can't take damage !" << std::endl;
		return ;
	}
	if (amount > this->_hitpoints)
		this->_hitpoints = 0;
	else	
		this->_hitpoints -= amount;
	if (this->_hitpoints != 0) {
		std::cout << _name << " is attacked. He takes " << amount << " damage. He has " \
		<< this->_hitpoints << " hit points left." << std::endl;
	}
	else
		std::cout << _name << " is attacked. " << _name << " died..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((amount + this->_hitpoints) > 10000) {
		std::cout << "Failed to reapair " << _name << ". He imploded !" << std::endl;
		return ;
	}
	else if (this->_hitpoints == 0) {
		std::cout << _name << " is dead, nothing can be done for him." << std::endl;
		return ;
	}
	else {
		this->_hitpoints += amount;
		std::cout << _name << " has been reapaired for " << amount << " hit points." \
		<< " He has " << this->_hitpoints << " hit points now." <<std::endl;
	}
}


void	ClapTrap::status( void ) const {
	std::cout << "\033[93m" << "STATUS : Name: " << this->_name << " / Hit points: " << this->_hitpoints \
	<< " / Energy points: " << this->_energypoints << " / Attack damage: " \
	<< this->_attackdamage << "\033[0m" << std::endl;
}