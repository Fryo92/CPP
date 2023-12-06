/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:54:18 by marvin            #+#    #+#             */
/*   Updated: 2023/07/21 12:54:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>	a(3);
	Array<int>	b(3);

	for (size_t i = 0; i < a.size(); i += 1) {
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}

	std::cout << std::endl;

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	for (size_t i = 0; i < a.size(); i += 1) {
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}

	std::cout << std::endl;

	b = a;
	for (size_t i = 0; i < a.size(); i += 1) {
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}

	std::cout << std::endl;

	b[0] = 3;
	b[1] = 1;
	b[2] = 2;
	for (size_t i = 0; i < a.size(); i += 1) {
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}
	std::cout << std::endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}

    try {
       std::cout << a[a.size() + 1] << std::endl;
    }
    catch (std::exception& e) {
       std::cerr << e.what() << std::endl;
    }
}