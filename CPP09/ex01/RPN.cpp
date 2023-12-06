/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:11:35 by abiddane          #+#    #+#             */
/*   Updated: 2023/11/08 14:21:33 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

RPN::RPN( RPN& copy) {
	*this = copy;
}

RPN& RPN::operator=(const RPN& other) {
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

void	RPN::init_data(std::string str){
	std::stringstream	ss(str);
	std::string			token;

	while(std::getline(ss, token, ' ')){
		if (!token.empty())
			this->_data.push_back(token);	
	}
}

int	RPN::check_data(){
	int	number = 0;
	int	sign = 0;

	if (this->_data.size() > 1){
		if (ft_strchr("0123456789", this->_data.at(0).at(0)) || ft_strchr("0123456789", this->_data.at(1).at(0)))
			return error("Error");		
		if (!ft_strchr("0123456789", this->_data.at(this->_data.size() - 1).at(0)))
			return error("Error");
	}
	for (size_t i = 0; i < this->_data.size(); i++){			
		if (this->_data.at(i).size() > 1)
			return error("Error");
		if (ft_strchr("0123456789+-/*", this->_data.at(i).at(0)))
			return error("Error");
		if (!ft_strchr("0123456789", this->_data.at(i).at(0)))
			number++;
		else
			sign++;	
	}
	if (number != sign + 1)
		return error("Error"); 
	return 0;
}

bool isOpe(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

void RPN::rpn(const std::string& str) {
    std::vector<double> pile;

    std::istringstream iss(str);
    std::string token;

    while (iss >> token){
        if (!isOpe(token)){
            double nombre;
            std::istringstream(token) >> nombre;
            pile.push_back(nombre);
        } 
		else {
            double operand2 = pile.back();
            pile.pop_back();
            double operand1 = pile.back();
            pile.pop_back();

            if (token == "+"){
                pile.push_back(operand1 + operand2);
            } 
			else if (token == "-"){
                pile.push_back(operand1 - operand2);
            } 
			else if (token == "*"){
                pile.push_back(operand1 * operand2);
            } 
			else if (token == "/"){
                if (operand2 == 0.0) {
                    std::cerr << "Error" << std::endl;
                    return ;
                }
                pile.push_back(operand1 / operand2);
            }
        }
    }
    std::cout << pile.back() << std::endl;
}