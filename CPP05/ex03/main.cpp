/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:33:54 by marvin            #+#    #+#             */
/*   Updated: 2023/07/17 12:33:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main() {
	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);
		Intern	intern;
		Form*	form;


		form = intern.makeForm("Shrubbery Creation", "garden");
		bureaucrat1.signForm(*form);
		bureaucrat1.executeForm(*form);
		delete form;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);
		Intern	intern;
		Form*	form;


		form = intern.makeForm("Robotomy Request", "Olaf");
		bureaucrat1.signForm(*form);
		bureaucrat1.executeForm(*form);
		delete form;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);
		Intern	intern;
		Form*	form;


		form = intern.makeForm("Presidential Pardon", "Olaf");
		bureaucrat1.signForm(*form);
		bureaucrat1.executeForm(*form);
		delete form;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);
		Intern	intern;
		Form*	form;


		form = intern.makeForm("Random", "Unknown");
		bureaucrat1.signForm(*form);
		bureaucrat1.executeForm(*form);
		delete form;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
} 
