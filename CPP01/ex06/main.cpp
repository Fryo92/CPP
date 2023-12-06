/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:17:58 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/24 14:23:40 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	
	if (ac == 2) {
		Harl	h;
		
		std::cout << std::endl;
		h.complain(av[1]);
	}
	else
		std::cerr << "Invalid input !" << std::endl;
}