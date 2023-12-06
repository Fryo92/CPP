/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:50:52 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 13:29:05 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
	
		Fixed();
		Fixed( const int i);
		Fixed( const float f);
		Fixed( Fixed const &copy );
		~Fixed();
		
		Fixed& operator=( Fixed const &copy );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private:
		
		int					_integer;
		static const int	_fraction = 8;
};

std::ostream&operator<<(std::ostream &out, const Fixed& fixed);

#endif