/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:59:57 by marvin            #+#    #+#             */
/*   Updated: 2023/07/05 12:59:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal {

	public:

		Dog();
		~Dog();
		Dog(Dog& copy);

		Dog& operator=(const Dog& other);

		void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

#endif