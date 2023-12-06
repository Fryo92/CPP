/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:11:39 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 16:17:11 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	{
		ClapTrap b("Superman");
		ScavTrap a;
		

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
		ScavTrap a("Achille");
		ScavTrap c(a);
		
		
		std::cout << std::endl;
		
		a.status();
		b.status();

		std::cout << std::endl;

		a.guardGate();
		
		std::cout << std::endl;

		a.guardGate();

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