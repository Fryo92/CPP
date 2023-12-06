/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:42:31 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 16:16:14 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	int	i = 42;
	Zombie *z = zombieHorde(i, "Karim");
	for (int j = 0; j < i; j++)
		z[j].announce();
	delete [] z;
}