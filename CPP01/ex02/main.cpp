/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:18:26 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 09:15:44 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {

	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Adresse de str:       " << &str << std::endl;
	std::cout << "Adresse de stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse de stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Valeur de str:       " << str << std::endl;
	std::cout << "Valeur de stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur de stringREF: " << stringREF << std::endl;
}