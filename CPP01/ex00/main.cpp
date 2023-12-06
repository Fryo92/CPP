/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:42:31 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 15:42:44 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie	jean("Jean");
	jean.announce();
	Zombie *hector = newZombie("Hector");
	hector->announce();
	randomChump("Marcel");
	delete hector;
}