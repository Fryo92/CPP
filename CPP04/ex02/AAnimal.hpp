/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:00:05 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 13:00:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class	Animal {

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& copy);

		Animal& operator=(const Animal& other);

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif