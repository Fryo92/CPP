/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:28:03 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:17:38 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class	HumanB {
			
	public:

		HumanB( std::string name );
		~HumanB();

		void	attack();
		void	setWeapon( Weapon &weapon);
		
	private:
	
		std::string	_name;
		Weapon		*_weapon;		
};

#endif