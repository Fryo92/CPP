/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:55:46 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/20 13:41:49 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			std::cout << (char)toupper(av[i][j]);
	}
	std::cout << std::endl;
}