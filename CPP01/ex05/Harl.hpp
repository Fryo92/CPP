/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:43:56 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:18:06 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {

	public:
	
		Harl();
		~Harl();

		void complain( std::string level );

	private:
	
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );		
};

#endif