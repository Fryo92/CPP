/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:50:34 by marvin            #+#    #+#             */
/*   Updated: 2023/08/18 12:50:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	try {
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(20);
		vec.push_back(30);
		vec.push_back(40);
		vec.push_back(50);
		
		int valueToFind = 30;
		std::vector<int>::iterator result = easyfind(vec, valueToFind);
		std::cout << "Value " << valueToFind << " found at position: " << std::distance(vec.begin(), result) << std::endl;
		
		valueToFind = 60;
		try {
			result = easyfind(vec, valueToFind);
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(15);
		lst.push_back(25);
		lst.push_back(35);
		lst.push_back(45);
		
		valueToFind = 25;
		easyfind(lst, valueToFind);
		std::cout << "Value " << valueToFind << " found in list." << std::endl;
		valueToFind = 2;
		try {
			easyfind(lst, valueToFind);
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}