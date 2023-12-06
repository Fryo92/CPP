/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:27:31 by marvin            #+#    #+#             */
/*   Updated: 2023/07/21 11:27:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <exception>

Base*	generate() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	char c = "ABC"[std::rand() % 3];
	std::cout << "Type created: " << c << std::endl;
	switch (c) {
		case 'A':
			return new A;
		case 'B':
			return new B;
		case 'C':
			return new C;
	}
	return NULL;
}

void	identify(Base* p) {
	bool try_cast;

	std::cout << "Using identify(Base* p): " << std::endl;
	try_cast = dynamic_cast<A*>(p);
	if (try_cast) {
		std::cout << "type is A" << std::endl;
		return ;
	}
	try_cast = dynamic_cast<B*>(p);
	if (try_cast) {
		std::cout << "type is B" << std::endl;
		return ;
	}
	try_cast = dynamic_cast<C*>(p);
	if (try_cast) {
		std::cout << "type is C" << std::endl;
		return ;
	}
	if (!try_cast)
		std::cout << "type is not A, B or C" << std::endl;
}

void	identify(Base& p) {
	std::cout << "Using identify(Base& p): " << std::endl;
	try {
		A& try_a = dynamic_cast<A&>(p);
		(void)try_a;
		std::cout << "type is A" << std::endl;
	}
	catch (const std::exception& e) {
		try {
			B& try_b = dynamic_cast<B&>(p);
			(void)try_b;
			std::cout << "type is B" << std::endl;
		}
		catch (const std::exception& e) {
			try {
			C& try_c = dynamic_cast<C&>(p);
			(void)try_c;
			std::cout << "type is C" << std::endl;
			}
			catch (const std::exception& e) {
				std::cout << "type is not A, B or C" << std::endl;
			}
		}
	}
}