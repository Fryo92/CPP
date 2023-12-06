/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:11:05 by abiddane          #+#    #+#             */
/*   Updated: 2023/11/08 14:18:28 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	error(std::string str){
	std::cout << str << std::endl;
	return 1;
}

int	main(int ac, char **av){
	if (ac != 2)
		return error("Error");
	std::string	str(av[1]);
	RPN			rpn;
	
	rpn.init_data(str);
	if (!rpn.check_data())
		rpn.rpn(str);	
}
