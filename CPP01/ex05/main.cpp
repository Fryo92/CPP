/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:17:58 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 14:07:44 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	
	Harl	h;
	
	std::cout << std::endl;

	std::cout << "Calling DEBUG" << std::endl;
	h.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "Calling INFO" << std::endl;
	h.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "Calling WARNING" << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "Calling ERROR" << std::endl;
	h.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "Calling ANOTHER" << std::endl;
	h.complain("ANOTHER");
	std::cout << std::endl;
}