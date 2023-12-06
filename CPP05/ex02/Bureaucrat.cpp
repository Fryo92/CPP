/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:42:55 by marvin            #+#    #+#             */
/*   Updated: 2023/07/17 11:42:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name(), _grade() {

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << _name << " Bureaucrat destroyed " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
	 std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this == &other) {
		return *this;
	}
	this->_name = other._name;
	this->_grade = other._grade;
	return *this;
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

std::string	Bureaucrat::getName() const{
	return (this->_name);
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm( Form& form) {
	int i = form.beSigned(*this);
	if (i == 2)
		std::cout << this->_name << " couldn't signed " << form.getName() << " because the form is already signed" << std::endl;
	else if (i == 1)
		std::cout << this->_name << " couldn't signed " << form.getName() << " because grade is too low" << std::endl;
	else
		std::cout << this->_name << " signed " << form.getName() << std::endl;	
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

void	Bureaucrat::executeForm( Form& form) {
	int i = form.execute(*this);
	if (i == 2)
		std::cout << this->_name << " couldn't execute " << form.getName() << " because the form isn't signed" << std::endl;
	else if (i == 1)
		std::cout << this->_name << " couldn't execute " << form.getName() << " because grade is too low" << std::endl;
	else
		std::cout << this->_name << " executed " << form.getName() << std::endl;	
}

std::ostream&   operator<<( std::ostream& ost, const Bureaucrat& other ) {
	ost << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (ost);
}