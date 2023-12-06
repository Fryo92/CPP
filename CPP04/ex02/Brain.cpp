/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:55:30 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 14:55:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain( Brain& copy) {
	*this = copy;
}

Brain& Brain::operator=(const Brain& other) {
	if (this == &other) {
		return *this;
	}
	for ( int i = 0; i < 100; i++ ) {
		this->_ideas[i] = other._ideas[i];
	}
	return *this;
}