/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:58:48 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:16:43 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
	
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &copy);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& other);
		
		void	attack(const std::string& target);
		void	guardGate();
		
		
	private:
		
		bool	_guard;
		
};

#endif