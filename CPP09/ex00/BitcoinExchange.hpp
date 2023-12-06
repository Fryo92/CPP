/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:06:36 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/22 11:40:37 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINS_EXCHANGE_HPP
# define BITCOINS_EXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <iomanip>

class BitcoinExchange
{
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(BitcoinExchange& copy);

	BitcoinExchange& operator=(const BitcoinExchange& other);
	
	void	init_data(std::ifstream *data_file);
	int		check_input(std::string date) const;
	float	get_data(std::string date);
	void	print_final(std::string date);

private:
	std::map<std::string, float>	_data; 
};

int	error(std::string str);

#endif