/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:53:41 by marvin            #+#    #+#             */
/*   Updated: 2023/07/17 12:53:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(), _signed(false), _gradeToSign(0), _gradeToExec(0) {

}

Form::Form(const std::string name, int gradeToSign, int gradeToExec)
 : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

Form::~Form() {
	std::cout << _name << " Form destroyed " << std::endl;
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec){
	 std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	if (this == &other) {
		return *this;
	}
	this->_signed = other._signed;
	return *this;
}

bool Form::getSigned() const{
	return (this->_signed);
}

int	Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec() const{
	return (this->_gradeToExec);
}

const std::string	Form::getName() const{
	return (this->_name);
}

int	Form::beSigned( Bureaucrat& bureaucrat ) {
	if (this->_signed == true)
		return (2);
	else if (this->_gradeToSign < bureaucrat.getGrade())
		return (1);
	else
		this->_signed = true;
	return (0);			
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

std::ostream&   operator<<( std::ostream& ost, const Form& other ) {
	ost << other.getName() << " Form, grade to sign " << other.getGradeToSign()
	<< ", grade to exec " << other.getGradeToExec() << ", ";
	if (other.getSigned() == true)
		ost << "is signed.";
	else
		ost << "is not signed.";	
	return (ost);
}