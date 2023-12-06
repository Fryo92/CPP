/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:30:18 by marvin            #+#    #+#             */
/*   Updated: 2023/07/21 12:30:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class	Array {
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const& copy);

		Array& operator=(Array const& other);
		T&	operator[](unsigned int n) throw(std::exception);

		unsigned int size();
		class	WrongIndexException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		T*				_array;
		unsigned int	_size;	
};

template<typename T>
Array<T>::Array() : _array(new T[0]()), _size(0) {
	std::cout << "Array default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
	std::cout << "Array constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array& copy) : _array(new T[copy._size]()), _size(copy._size) {
	*this = copy;
	std::cout << "Array copy constructor called" << std::endl;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const& other) {
	delete[] this->_array;
	this->_array = new T[other._size];
	this->_size = other._size;
	for (unsigned int i = 0; i < other._size; i++)
		this->_array[i] = other._array[i];
	return *this;	
}

template<typename T>
T&	Array<T>::operator[](unsigned int n) throw(std::exception) {
	if (n >= this->_size)
		throw Array<T>::WrongIndexException();
	return this->_array[n];	
}

template<typename T>
Array<T>::~Array() {
	delete[] this->_array;
	std::cout << "Array destroyed" << std::endl;
}

template<typename T>
unsigned int	Array<T>::size() {
	return this->_size;
}

template <typename T>
char const*	Array<T>::WrongIndexException::what() const throw() {
	return "Exception caught: wrong index";
}

#endif