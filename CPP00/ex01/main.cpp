/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:46:39 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/22 15:40:29 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip> 
#include "PhoneBook.hpp"
#include "Contact.hpp"


int	main(void)
{

	PhoneBook A;
	std::string buff = "";
	
	while (buff.compare("EXIT"))
	{
		if (!buff.compare("ADD"))
			A.addContact();
		else if (!buff.compare("SEARCH"))
		{
			A.viewList();
			A.getContact();
		}
		std::cout << "Enter a command : " << std::flush;
		std::cin >> buff;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
	}
}