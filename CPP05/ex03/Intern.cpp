/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:34:30 by marvin            #+#    #+#             */
/*   Updated: 2023/07/18 14:34:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called." << std::endl;
	return ;
}

Intern::Intern(Intern const & copy) {
	std::cout << "Intern copy constructor called." << std::endl;
	(void)copy;
}

Intern::~Intern() {
	std::cout << "Intern desctructor called." << std::endl;
}

Intern &	Intern::operator=(Intern const & other)
{
	std::cout << "Intern assignment operator overload called." << std::endl;
	(void)other;
	return (*this);
}

static Form	*createShrubbery(std::string const& target) {
	return (new ShrubberyCreationForm(target));
}

static Form	*createRobotomy(std::string const& target) {
	return (new RobotomyRequestForm(target));
}

static Form	*createPresidential(std::string const& target) {
	return (new PresidentialPardonForm(target));
}

const char *	Intern::InvalidNameException::what(void) const throw()
{
	return ("Invalid name");
}

Form	*Intern::makeForm(std::string name, std::string const target) {
	Form	*retForm = NULL;

	static tFormList const form[3] = {
			{"Shrubbery Creation", createShrubbery},
			{"Robotomy Request", createRobotomy},
			{"Presidential Pardon", createPresidential}
		};

	for (int i = 0; i <= 2; i++) {
		if (form[i].name == name) {
			retForm = form[i].function(target);
			std::cout << "Intern created " << retForm->getName() << std::endl;
			return (retForm);
		}
	}
	throw Intern::InvalidNameException();
}