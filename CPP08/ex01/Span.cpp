/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:06:51 by marvin            #+#    #+#             */
/*   Updated: 2023/08/18 14:06:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size() {

}

Span::Span(unsigned int N) : _size(N) {
}

Span::~Span() {
}

Span::Span(const Span& copy) {
	*this = copy;
}

Span& Span::operator=(const Span& other) {
	if (this == &other) {
		return *this;
	}
	this->_size = other._size;
	return *this;
}

void	Span::addNumber(int value) {
	if (this->_num.size() >= this->_size)
		throw FullSpan();
	this->_num.push_back(value);
}

int	Span::shortestSpan() {
	if (this->_num.size() <= 1)
		throw TooSmallSpan();
	std::vector<int> sortedNum = this->_num;
	sort(sortedNum.begin(), sortedNum.end());
	int	res = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNum.size(); i++) {
		int temp = sortedNum.at(i) - sortedNum.at(i - 1);
		res = std::min(res, temp);
	}
	return res;
}

int	Span::longestSpan() {
	if (this->_num.size() <= 1)
		throw TooSmallSpan();
	std::vector<int>::const_iterator	min = std::min_element(this->_num.begin(), this->_num.end());
	std::vector<int>::const_iterator	max = std::max_element(this->_num.begin(), this->_num.end());
	return *max - *min;
}