/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:07:28 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/22 11:38:01 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange( BitcoinExchange& copy) {
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this == &other) {
		return *this;
	}
	this->_data = other._data;
	return *this;
}

int	ft_strchr(std::string str, char c){
	for (size_t i = 0; i < str.size(); i++){
		if (str.at(i) == c)
			return 0;
	}
	return 1;
}

static unsigned int	ft_stou(std::string str){
	std::stringstream	uStream(str);
	unsigned int	u;

	uStream >> u;
	return u;
}

static float	ft_stof(std::string str){
	std::stringstream	floatStream(str);
	float	f;

	floatStream >> f;
	return f;
}


void	BitcoinExchange::init_data(std::ifstream *data_file){
	std::string	str;
	size_t		delim;
	
	std::getline(*data_file, str);
	while (std::getline(*data_file, str)){
		delim = str.find(',');
		this->_data[str.substr(0, delim)] = ft_stof(str.substr(delim + 1));
	}
}

float	BitcoinExchange::get_data(std::string date){
	std::map<std::string, float>::iterator	it;
	
	it = this->_data.find(date);
	if (it == this->_data.end())
		it = --this->_data.lower_bound(date);
	return it->second;
}

int		check_format(std::string date){
	size_t	delim1, delim2, delim3;

	delim1 = date.find('-');
	delim2 = date.find('-', delim1 + 1);
	delim3 = date.find('-', delim2 + 1);
	if (delim1 == std::string::npos || delim2 == std::string::npos || delim3 != std::string::npos)
		return error("Error: Wrong date format");
	return 0;
}

int		check_date(std::string	date){
	int	year, month, day;
	size_t	delim1, delim2, delim3;

	delim1 = date.find('-');
	delim2 = date.find('-', delim1 + 1);
	delim3 = date.find('|', delim2 + 1);
	year = ft_stou(date.substr(0, delim1));
	month = ft_stou(date.substr(delim1 + 1, delim2));
	day = ft_stou(date.substr(delim2 + 1, delim3));
	if (year < 2009 || year > 2022)
		return error("Error: date out of data range");
	if (month < 1 || month > 12)
		error("Error: invalid month");
	if (day < 1 || day > 31 ||
		((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
		(month == 2 && day > 28))
		return error("Error: invalid day");
	return 0;
}

int		check_value(std::string date){
	unsigned int	value;
	size_t			delim, delim2;
	std::string		find = "0123456789";

	delim = date.find('|');
	delim2 = date.find('|', delim + 1);
	if (delim == std::string::npos || delim + 2 >= date.size() || delim2 != std::string::npos){
		std::cerr << "Error: invalid input => ";
		return error(date);
	}
	if (date.substr(delim + 1).at(date.substr(delim + 1).size() - 1) == '-'){
		std::cerr << "Error: invalid input => ";
		return error(date);
	}
	if (date.substr(delim + 1).at(1) == '-' && !ft_strchr(find, date.substr(delim + 1).at(2)))
		return error("Error: not a positive number.");
	if (ft_strchr(find, date.substr(delim + 1).at(1))){
		std::cerr << "Error: invalid input => ";
		return error(date);
	}
	value = ft_stou(date.substr(delim + 1));
	if (value > 1000)
		return error("Error: too large a number.");
	return 0;	
}

int		BitcoinExchange::check_input(std::string date) const{
	std::string str = "0123456789. |-";
	for(size_t i = 0; i < date.size(); i++){
		if (ft_strchr(str, date.at(i))){
			std::cerr << "Error: invalid input => ";
			return error(date);
		}
	}
	if (check_value(date))
		return 1;
	if (check_format(date))
		return 1;	
	if (check_date(date))
		return 1;
	return 0;	
	
}

void	BitcoinExchange::print_final(std::string	date){
	size_t		delim;
	std::string	tmp;
	float		value;

	delim = date.find('|');
	tmp = date.substr(0, delim);
	value = ft_stof(date.substr(delim + 1));
	std::cout << tmp << " => " << value << " = " << (value * this->get_data(date)) << std::endl;
}