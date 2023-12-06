/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:46:46 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 13:45:52 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

class Contact {
	
	public:
	
		Contact(void);
		~Contact(void);
		
		void	initContact(int index);
		void	contactList(void) const;
		void	displayContact(void) const;
		
	private:
	
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		
		int			_index;
		
		std::string	_tooLarge(std::string str) const;
		std::string	_getInput(std::string str, int toggle) const;
		bool		isNumber(std::string str) const;
};

#endif