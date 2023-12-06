/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:46:00 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/22 13:13:32 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(void);
		void	viewList(void) const;
		void	getContact(void) const;

	private:

		Contact	_contact[8];
};

#endif