/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:27:20 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:17:50 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon {

	public:

		Weapon();
		Weapon( std::string	type );
		~Weapon();	

		std::string&	getType( void );
		void			setType( std::string value );	

	private:

		std::string	_type;		
};

#endif