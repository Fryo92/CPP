/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:06:35 by marvin            #+#    #+#             */
/*   Updated: 2023/08/18 14:06:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	try{
	Span sp = Span(5);
	try{
		sp.shortestSpan();
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(6);
	try{
		sp.longestSpan();
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(17);
	sp.addNumber(11);
	try{
		sp.addNumber(15);
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	int values[] = {6, 3, 17, 9, 11};
	Span ssp = Span(5);
	ssp.addRange(values, values + sizeof(values) / sizeof(int));
	std::cout << ssp.shortestSpan() << std::endl;
	std::cout << ssp.longestSpan() << std::endl;
	ssp.addRange(values, values + sizeof(values) / sizeof(int));
	} catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}