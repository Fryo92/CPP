/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:18:25 by marvin            #+#    #+#             */
/*   Updated: 2023/07/21 12:18:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void print_elem(T &elem) {
	std::cout << elem << std::endl;
}

template<typename T>
void	iter(T* tab, int len, void (*f)(T&)) {
	for (int i = 0; i < len; i++) {
		f(tab[i]);
	}
}

#endif