/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:12:37 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/08 13:57:38 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap {

	public:
	
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &copy);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& other);
		
		void	attack( const std::string& target );
		void	whoAmI( void );
		void	status( void ) const;
		
	private:
		
		DiamondTrap();
		std::string	_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
	
};

#endif