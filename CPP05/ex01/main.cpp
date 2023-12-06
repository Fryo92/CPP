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
#include "Form.hpp"

int	main() {
	try {
		std::cout << "Test 1" << std::endl;
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		std::cout << bureaucrat1 << std::endl;

		Form form("Facture", 50, 1);
		std::cout << form << std::endl;

		bureaucrat1.signForm(form);
		std::cout << form << std::endl;
		bureaucrat1.signForm(form);
		
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "Test 2" << std::endl;
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		std::cout << bureaucrat1 << std::endl;

		Form form("Facture", 151, 1);
		std::cout << form << std::endl;

		bureaucrat1.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "Test 3" << std::endl;
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		std::cout << bureaucrat1 << std::endl;

		Form form("Facture", 0, 1);
		std::cout << form << std::endl;

		bureaucrat1.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "Test 4" << std::endl;
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		std::cout << bureaucrat1 << std::endl;

		Form form("Facture", 1, 1);
		std::cout << form << std::endl;

		bureaucrat1.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
} 