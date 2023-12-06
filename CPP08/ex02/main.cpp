/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:43:44 by marvin            #+#    #+#             */
/*   Updated: 2023/08/18 15:43:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::vector<int> vec;
vec.push_back(5);
vec.push_back(17);
std::cout << vec[1] << std::endl;
vec.pop_back();
std::cout << vec.size() << std::endl;
vec.push_back(3);
vec.push_back(5);
vec.push_back(737);
vec.push_back(0);
std::vector<int>::iterator itt = vec.begin();
std::vector<int>::iterator itte = vec.end();
++itt;
--itt;
while (itt != itte)
{
std::cout << *itt << std::endl;
++itt;
}
return 0;
}