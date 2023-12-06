/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:33:16 by abiddane          #+#    #+#             */
/*   Updated: 2023/11/11 12:38:09 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av){
	
	std::list<int> li;
	std::deque<int> deq;

	if (parse(ac, av, li, deq))
		return 1;
	
	std::cout << "Before :";
	for (int i = 1; av[i]; i++){
		std::cout << " " << av[i];
	}
	std::cout << std::endl;
	
	const std::clock_t c_start_list = std::clock();
	sort_list(li);
	const std::clock_t c_end_list = std::clock();

	const std::clock_t c_start_deque = std::clock();
	sort_deq(deq);
	const std::clock_t c_end_deque = std::clock();
	
	std::list<int>::iterator it;
	std::deque<int>::iterator itd;
	
	std::cout << "After (list):";
	for (it = li.begin(); it != li.end(); it++)
		std::cout << " " << *it;
	
	std::cout << std::endl;

	std::cout << "After (deque):";
	for (itd = deq.begin(); itd != deq.end(); itd++)
		std::cout << " " << *itd;

	std::cout << std::endl;	

	std::cout << "Time to process a range of " << li.size() << " elements with std::list : " << c_end_list - c_start_list << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << c_end_deque - c_start_deque << " us" << std::endl;
}