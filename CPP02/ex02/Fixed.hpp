/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:50:52 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/07 10:05:47 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <algorithm>

class Fixed {

	public:
	
		Fixed();
		Fixed( const int i );
		Fixed( const float f );
		Fixed( Fixed const &copy );
		~Fixed();
		
		Fixed& operator=( Fixed const &copy );
		bool operator>( Fixed const &other ) const;
		bool operator<( Fixed const &other ) const;
		bool operator>=( Fixed const &other ) const;
		bool operator<=( Fixed const &other ) const;
		bool operator==( Fixed const &other ) const;
		bool operator!=( Fixed const &other ) const;
		Fixed operator+( Fixed const &other ) const;
		Fixed operator-( Fixed const &other ) const;
		Fixed operator*( Fixed const &other ) const;
		Fixed operator/( Fixed const &other ) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++( int );
		Fixed operator--( int );
		
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		int			toInt( void ) const;
		float		toFloat( void ) const;
		static Fixed&		min( Fixed& i, Fixed& j );
		static Fixed&		max( Fixed& i, Fixed& j );
		const static Fixed&	min( const Fixed& i, const Fixed& j );
		const static Fixed&	max( const Fixed& i, const Fixed& j );

	private:
		
		int					_integer;
		static const int	_fraction = 8;		
};

std::ostream&operator<<( std::ostream &out, const Fixed& fixed );

#endif