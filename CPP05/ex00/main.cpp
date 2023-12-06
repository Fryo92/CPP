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

int	main() {
	try {
		std::cout << "Test 1" << std::endl;
		Bureaucrat bureaucrat1("Mary Poppins", 50);
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "Test 2" << std::endl;
		Bureaucrat bureaucrat1("Failed1", 151);
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try {
		std::cout << "Test 3" << std::endl;
		Bureaucrat bureaucrat1("Failed2", 0);
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try {
		std::cout << "Test 4" << std::endl;
		Bureaucrat bureaucrat1("John Wick", 1);
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try {
		std::cout << "Test 5" << std::endl;
		Bureaucrat bureaucrat1("John Snow", 150);
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
} 