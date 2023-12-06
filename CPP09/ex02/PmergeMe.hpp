/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:58:11 by abiddane          #+#    #+#             */
/*   Updated: 2023/11/08 13:06:41 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <list>
# include <deque>
# include <iostream>
# include <cstdlib>
# include <cctype>
# include <iterator>
# include <ctime>
# include <iomanip>
# include <ios>

int		parse(int ac, char **av, std::list<int>& li, std::deque<int>& deq);
void	sort_list(std::list<int>& li);
void	merge_list(std::list<int>& li, std::list<int>& mchain, std::list<int>& pend);
void	sort_deq(std::deque<int>& deq);
void	merge_deq(std::deque<int>& deq, std::deque<int>& mchain, std::deque<int>& pend);

#endif