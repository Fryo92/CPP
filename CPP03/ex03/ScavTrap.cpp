/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:59:19 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/08 13:59:33 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default"){
	std::cout << "\033[92m" << "ScavTrap default constructor called" << "\033[0m" << std::endl;
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	std::cout << "\033[92m" << "ScavTrap string constructor called" << "\033[0m" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const &copy) {
	std::cout << "\033[92m" << "ScavTrap copy constructor called" << "\033[0m" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energypoints = copy._energypoints;
	this->_attackdamage = copy._attackdamage;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[31m" << "ScavTrap " << _name << " destroyed" << "\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitpoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is dead. He can't attack !" << std::endl;
		return ;
	}
	if (this->_energypoints == 0) {
		std::cout << "ScavTrap " << this->_name << " has no energy. He can't attack !" << std::endl;
		return ;
	}
	this->_energypoints -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " , causing " \
	<< this->_attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_guard == true) {
		std::cout << this->_name << " is already in gate keeper mode." << std::endl;
		return ;
	}
	std::cout << this->_name << " enters gate keeper mode." << std::endl;
	this->_guard = true;
}