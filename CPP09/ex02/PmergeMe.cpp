/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:57:44 by abiddane          #+#    #+#             */
/*   Updated: 2023/11/11 13:24:26 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	parse(int ac, char **av, std::list<int>& li, std::deque<int>& deq){
	if (ac == 1){
		std::cout << "Error: Wrong format." << std::endl;
		return 1;
	}
	int i;
	for (i = 1; av[i]; i++){
		
		if (std::atoi(av[i]) <= 0){
			std::cout << "Error: Not positive integer." << std::endl;
			return 1;
		}
		
		for (int j = 0; av[i][j]; j++){
			if (!std::isdigit(av[i][j])){
				std::cout << "Error: Wrong format." << std::endl;
				return 1;
			}
		}

		li.push_back(std::atoi(av[i]));
		deq.push_back(std::atoi(av[i]));
		
		for (int j = i - 2; j >= 0; j--){
			if (deq.at(i - 1) == deq.at(j)){
				std::cout << "Error: Duplicate number" << std::endl;
				return 1;
			}
		}
	}
	return 0;
}

int	is_sorted(std::list<int> mchain){
	std::list<int>::iterator it;
	int i = -1;
	for (it = mchain.begin(); it != mchain.end(); it++){
		if (i > *it)
			return 1;
		i = *it;	
	}
	return 0;
}

int	is_sorted_deq(std::deque<int> mchain){
	std::deque<int>::iterator it;
	int i = -1;
	for (it = mchain.begin(); it != mchain.end(); it++){
		if (i > *it)
			return 1;
		i = *it;	
	}
	return 0;
}

void	sort_pair_list(std::list<int>& mchain, std::list<int>& pend){
	
	std::list<int>::iterator it = mchain.begin();
	std::list<int>::iterator itp = pend.begin();
	std::list<int>::iterator next;
	std::list<int>::iterator nextp;
	
	if (it != mchain.end()){
		next = it;
		next++;
		nextp = itp;
		nextp++;
	}
	while (it != mchain.end()){
		if (next != mchain.end()){
			if (*it > *next){
				int	temp = *it;
				*it = *next;
				*next = temp;
				int	tempp = *itp;
				*itp = *nextp;
				*nextp = tempp;
			}	
		}
		it++;
		next++;
		itp++;
		nextp++;
	}
	if (is_sorted(mchain))
		sort_pair_list(mchain, pend);
}

void	merge_list(std::list<int>& mchain, std::list<int>& pend){
	unsigned int jac[11] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365};
	std::list<int>::iterator it = mchain.begin(); 
	std::list<int>::iterator itp = pend.begin();
	std::list<int>::iterator temp;
	int	i = 1;
	unsigned int size = mchain.size();
	
	mchain.insert(it, *itp);
	while (i < 11){
		if (size >= jac[i]){
			it = mchain.begin();
			temp = pend.begin();
			for (unsigned int count = 1; count != jac[i]; count++)
				temp++;
			while (*it < *temp)
				it++;	
			mchain.insert(it, *temp);
			for (unsigned int count = 1; count != (jac[i] - jac[i - 1]); count++){
				temp--;
				it = mchain.begin(); 
				while (*it < *temp)
					it++;
				mchain.insert(it, *temp);	
			}
		}
		else
			break ;
		i++;
	}
	temp = pend.begin();	
	for (unsigned int count = 0; count != (jac[i - 1]); count++){
		temp++;
	}
	std::cout << "ici = " << *temp << std::endl;
	while (temp != pend.end()){
		it = mchain.begin();
		while (*it < *temp && it != mchain.end()){
			it++;
		}
		if (it != mchain.end())
			mchain.insert(it, *temp);
		else
			mchain.push_back(*temp);
		temp++;	
	}
}

void	sort_list(std::list<int>& li){
	std::list<int> mchain;
	std::list<int> pend;
	std::list<int>::iterator it = li.begin();
	std::list<int>::iterator next;

	while (it != li.end()){
		next = it;
		next++;
		if (next == li.end()){
			pend.push_back(*it);
			it++;
		}
		else {
			if (*it < *next){
				pend.push_back(*it);
				mchain.push_back(*next);
			}
			else {
				pend.push_back(*next);
				mchain.push_back(*it);
			}
			std::advance(it, 2);
		}
	}
	li.clear();
	sort_pair_list(mchain, pend);
	merge_list(mchain,pend);
	li.swap(mchain);
}

void	sort_pair_deq(std::deque<int>& mchain, std::deque<int>& pend){
	
	std::deque<int>::iterator it = mchain.begin();
	std::deque<int>::iterator itp = pend.begin();
	std::deque<int>::iterator next;
	std::deque<int>::iterator nextp;
	
	if (it != mchain.end()){
		next = it;
		next++;
		nextp = itp;
		nextp++;
	}
	while (it != mchain.end()){
		if (next != mchain.end()){
			if (*it > *next){
				int	temp = *it;
				*it = *next;
				*next = temp;
				int	tempp = *itp;
				*itp = *nextp;
				*nextp = tempp;
			}
		}
		it++;
		next++;
		itp++;
		nextp++;
	}
	if (is_sorted_deq(mchain))
		sort_pair_deq(mchain, pend);
}

void	merge_deq(std::deque<int>& mchain, std::deque<int>& pend){
	unsigned int jac[11] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365};
	std::deque<int>::iterator it = mchain.begin(); 
	std::deque<int>::iterator itp = pend.begin();
	unsigned int	temp;
	int	i = 1;
	unsigned int size = mchain.size();
	
	mchain.insert(it, *itp);
	while (i < 11){
		if (size >= jac[i]){
			it = mchain.begin();
			temp = jac[i] - 1;
			while (*it < pend.at(temp))
				it++;	
			mchain.insert(it, pend.at(temp));
			while (temp != jac[i - 1]){
				temp--;
				it = mchain.begin(); 
				while (*it < pend.at(temp))
					it++;
				mchain.insert(it, pend.at(temp));	
			}
		}
		else
			break ;
		i++;
	}
	temp = jac[i - 1];
	while (temp < pend.size()){
		it = mchain.begin();
		while (*it < pend.at(temp) && it != mchain.end())
			it++;
		if (it != mchain.end())	
			mchain.insert(it, pend.at(temp));
		else
			mchain.push_back(pend.at(temp));
		temp++;	
	}	
}

void	sort_deq(std::deque<int>& deq){
	std::deque<int> mchain;
	std::deque<int> pend;
	std::deque<int>::iterator it = deq.begin();
	std::deque<int>::iterator next;

	while (it != deq.end()){
		next = it;
		next++;
		if (next == deq.end()){
			pend.push_back(*it);
			it++;
		}
		else {
			if (*it < *next){
				pend.push_back(*it);
				mchain.push_back(*next);
			}
			else {
				pend.push_back(*next);
				mchain.push_back(*it);
			}
			std::advance(it, 2);
		}
	}
	deq.clear();
	sort_pair_deq(mchain, pend);
	merge_deq(mchain,pend);
	deq.swap(mchain);
}