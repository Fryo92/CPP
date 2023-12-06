/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:37:39 by marvin            #+#    #+#             */
/*   Updated: 2023/07/20 11:37:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}
ScalarConverter::~ScalarConverter() {

}
ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

static int ft_stoi(const std::string& literal)
{
    int i;
    std::stringstream intStream(literal);

    intStream >> i;
    return i;
}

static float ft_stof(const std::string& literal)
{
    float f;
    std::stringstream floatStream(literal);

    floatStream >> f;
    return f;
}

static double ft_stod(const std::string& literal)
{
    double d;
    std::stringstream doubleStream(literal);

    doubleStream >> d;
    return d;
}

static bool isChar(const std::string& literal) {
	if (literal.length() == 1 && !std::isdigit(literal.at(0))
	&& literal.at(0) >= std::numeric_limits<char>::min()
	&& literal.at(0) <= std::numeric_limits<char>::max())
		return true;
	return false;	
}

static bool isInt(const std::string& literal) {
	size_t start = 0;

	if (literal.at(0) == '-')
			start++;
	for (size_t i = start; i < literal.length(); i++) {
		if (!std::isdigit(literal.at(i)))
			return false;
	}
	return true;
}

static bool isFloat(const std::string& literal) {
	bool point = false;
	size_t start = 0;
	
	if (literal.at(0) == '-')
			start++;
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return true;
	if (literal.at(literal.length() - 1) != 'f')
		return false;
	for (size_t i = start; i + 1 < literal.length(); i++) {
		if (literal.at(i) == '.' && point == true)
			return false;
		else if (literal.at(i) == '.' && point == false) {
			point = true;
			i++;
		}
		if (!std::isdigit(literal.at(i)))
			return false;
	}
	return true;
}

static bool isDouble(const std::string& literal) {
	bool point = false;
	size_t start = 0;
	
	if (literal.at(0) == '-')
			start++;
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return true;
	for (size_t i = start; i < literal.length(); i++) {
		if (literal.at(i) == '.' && point == true)
			return false;
		else if (literal.at(i) == '.' && point == false) {
			point = true;
			i++;
		}
		if (!std::isdigit(literal.at(i)))
			return false;
	}
	return true;
}

static int	type(const std::string& literal) {
	if (isChar(literal))
		return 1;
	if (isInt(literal))
		return 2;
	if (isFloat(literal))
		return 3;
	if (isDouble(literal))
		return 4;
	return 0;				
}

static void	pseudoLiteral(int j, const std::string& literal) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (j == 1) {
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0,literal.length() - 1) << std::endl;
	}
	else if (j 	 == 2) {
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
}

void ScalarConverter::convert(const std::string& literal) {
	switch(type(literal)) {
		case 1:
			std::cout << "char: '" << literal.at(0) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(literal.at(0)) << std::endl;
			std::cout << "float: " << static_cast<float>(literal.at(0)) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(literal.at(0)) << ".0" << std::endl;
			break;

		case 2: {
			int i = ft_stoi(literal);
			if (i < 178 && std::isprint(i))
				std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << i << std::endl;	
			std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
			break;
		}

		case 3:
			if (literal == "nanf" || literal == "-inff" || literal == "+inff" ) 
				pseudoLiteral(1, literal);
			else {	
				float f = ft_stof(literal);
				if (f < 178 && std::isprint(f))
					std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
				else
					std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(f) << std::endl;	
				std::cout << "float: " << f << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(f) << std::endl;
			}
			break; 

		case 4:
			if (literal == "nan" || literal == "-inf" || literal == "+inf" ) 
				pseudoLiteral(2, literal);
			else {	
				double d = ft_stod(literal);
				if (d < 178 && std::isprint(d))
					std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
				else
					std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(d) << std::endl;	
				std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
				std::cout << "double: " << d << std::endl;
			}
			break;
		
		default :
			std::cout << "Try another type : <char>, <int>, <float> or <double>." << std::endl;
	}
}	
