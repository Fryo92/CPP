/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:05:38 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 15:05:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal {

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);

		WrongAnimal& operator=(const WrongAnimal& other);

		void	makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif