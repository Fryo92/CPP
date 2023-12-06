/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:11:39 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:15:07 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	{
		ClapTrap a;
		ClapTrap b(a);

		std::cout << std::endl;
		
		a.status();
		b.status();
		
		std::cout << std::endl;
		
		a.attack(b.getName());
		b.takeDamage(2);
		
		std::cout << std::endl;
		
		a.beRepaired(10);
		
		std::cout << std::endl;
		
		a.status();
		b.status();
	}

	std::cout << std::endl << "-----------------------------------------------------------------------------------" << std::endl << std::endl;

	{
		ClapTrap a("Achille");
		ClapTrap b("Hector");
		
		std::cout << std::endl;
		
		a.status();
		b.status();

		std::cout << std::endl; 
		
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		a.status();
		
		std::cout << std::endl;
		
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		a.status();

		std::cout << std::endl;

		a.beRepaired(2);
		b.beRepaired(4);
		a.status();
		b.status();
		
		std::cout << std::endl;
		
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		a.status();
		
		std::cout << std::endl;
		
		a.attack(b.getName());
		b.takeDamage(2);
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(100);
		a.status();

		std::cout << std::endl;
		
		a.attack(b.getName());
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		a.status();
		
		std::cout << std::endl;;

		a.beRepaired(2);
		
		std::cout << std::endl;
		
		b.attack(b.getName());
		
		std::cout << std::endl;
	}
}