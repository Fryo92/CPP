/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:50:52 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/25 13:18:42 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:
	
		Fixed();
		Fixed( Fixed const &copy );
		~Fixed();
		
		Fixed&operator=( Fixed const &copy );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		
		int					_integer;
		static const int	_fraction = 8;		
};

#endif