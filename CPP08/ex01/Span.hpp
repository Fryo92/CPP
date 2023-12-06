/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:06:42 by marvin            #+#    #+#             */
/*   Updated: 2023/08/18 14:06:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <limits>

class	Span {
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		
		Span& operator=(const Span& other);

		class FullSpan : public std::exception {
			virtual const char* what() const throw(){
				return "Span is full";
			}
		};
		class TooSmallSpan : public std::exception {
			virtual const char* what() const throw(){
				return "Not enough numbers to calculate";
			}
		};
		
		void	addNumber(int value);
		void 	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		template <typename InputIterator>
		void addRange(InputIterator first, InputIterator last) {
			if (_num.size() + std::distance(first, last) > _size) {
				throw FullSpan();
			}
			_num.insert(_num.end(), first, last);
    	}

	private:
		Span();

		unsigned int		_size;
		std::vector<int>	_num;
};

#endif