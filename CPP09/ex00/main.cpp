/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:06:06 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/27 16:42:57 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	first_str(std::string str){
	std::string	str2 = "date | value";
	size_t	i = 0;
	
	while (i < str.size() && i < str2.size()){
		if (str.at(i) != str2.at(i))
			break;
		i++;
	}
	if (i == str.size() && i == str2.size())
		return 0;
	return 1;
}

int	error(std::string str){
	std::cerr << str << std::endl;
	return 1;
}

int	main(int ac, char **av){
	if (ac != 2)
		return error("Error: Wrong arguments");

	std::ifstream input_file(av[1]);
	std::ifstream data_file("data.csv");

	if (!input_file.is_open() || !data_file.is_open())
		return error("Error: Failed opening file");
	
	BitcoinExchange	btc;

	btc.init_data(&data_file);

	std::string	buf;
	std::getline(input_file, buf);
	if (buf != "date | value")
		return error("Error: Wrong input format");
	while (std::getline(input_file, buf)){
		if (btc.check_input(buf))
			continue ;
		btc.print_final(buf);
	}
}