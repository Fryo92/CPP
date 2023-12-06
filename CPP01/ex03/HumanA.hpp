/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:27:54 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:17:13 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class	HumanA {

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA();

		void	attack( void );
		
	private:
	
		std::string	_name;
		Weapon		&_weapon;	
};

#endif