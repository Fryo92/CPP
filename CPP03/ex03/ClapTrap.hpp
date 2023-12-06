/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:11:58 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:18:33 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {
	
	public:
	
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &copy );
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& other);

		std::string		getName( void ) const;
		unsigned int	getAttackDamage( void ) const;
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		virtual void	status( void ) const;

	protected:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
};

#endif