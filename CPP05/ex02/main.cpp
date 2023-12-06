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

int	main() {
	try {
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		Bureaucrat bureaucrat2("Some Random", 150);

		ShrubberyCreationForm form("Garden");

		bureaucrat1.signForm(form);
		bureaucrat1.executeForm(form);
		bureaucrat2.executeForm(form);
		
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 45);
		Bureaucrat bureaucrat2("Some Random", 150);

		RobotomyRequestForm form("Olaf");

		bureaucrat1.signForm(form);
		bureaucrat1.executeForm(form);
		bureaucrat2.executeForm(form);
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);
		Bureaucrat bureaucrat2("Some Random", 150);

		PresidentialPardonForm form("Olaf");

		bureaucrat1.signForm(form);
		bureaucrat1.executeForm(form);
		bureaucrat2.executeForm(form);
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat bureaucrat1("Mary Poppins", 1);

		PresidentialPardonForm form("Olaf");
		bureaucrat1.executeForm(form);
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
} 