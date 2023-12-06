/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:56:08 by marvin            #+#    #+#             */
/*   Updated: 2023/07/18 11:56:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 75, 45), _target("Default target") {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 75, 45), _target(target) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << this->getName() << " RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy), _target(copy._target) {
	 std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this == &other) {
		return *this;
	}
	this->_target = other._target;
	return *this;
}

void	RobotomyRequestForm::exec() const {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	if (std::rand() % 2){
		std::cout << "BRRRrrrrrr !" << std::endl;
		std::cout << this->_target << " has been robotomised" << std::endl;
	}
	else
		std::cout << "Robotomised failed" << std::endl;
}
