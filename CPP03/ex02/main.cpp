/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:11:39 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:25:23 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	{
		ClapTrap b("Superman");
		FragTrap a;
		

		std::cout << std::endl;
		
		a.status();
		b.status();
		
		std::cout << std::endl;
		
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		
		std::cout << std::endl;
		
		a.beRepaired(10);
		
		std::cout << std::endl;
		
		a.status();
		b.status();
	}

	std::cout << std::endl << "-----------------------------------------------------------------------------------" << std::endl << std::endl;

	{
		ClapTrap b;
		FragTrap a("Achille");
		FragTrap c(a);
		
		
		std::cout << std::endl;
		
		a.status();
		b.status();
		
		std::cout << std::endl;

		a.highFivesGuys();

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
		b.takeDamage(a.getAttackDamage());
		b.status();

		std::cout << std::endl;
		
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
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