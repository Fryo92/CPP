/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:42:40 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:17:23 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie {

	public:
		
		Zombie();
		~Zombie();
		void	announce( void );
		void	setName( std::string name);

	private:

		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif