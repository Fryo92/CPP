/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:08:34 by marvin            #+#    #+#             */
/*   Updated: 2023/07/20 15:08:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {
	Data		tester;
	Data*		deserialized;
	uintptr_t	serialized;

	tester.needed = "Hello";
	serialized = Serializer::serialize(&tester);

	std::cout << "Data address: " << &tester << std::endl;
	std::cout << "Data variable: " << tester.needed << std::endl;
	std::cout << "Serialized value: " << serialized << std::endl;

	std::cout << std::endl;

	deserialized = Serializer::deserialize(serialized);

	std::cout << "Deserialized address: " << deserialized << std::endl;
	std::cout << "Deserialized variable: " << deserialized->needed << std::endl;
}