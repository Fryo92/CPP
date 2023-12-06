/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:29:13 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:24:45 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

	public:
	
		FragTrap();
		FragTrap( std::string name );
		FragTrap( FragTrap const &copy);
		~FragTrap();

		FragTrap& operator=(const FragTrap& other);
		
		void	highFivesGuys(void);

		
	private:
	
};

#endif