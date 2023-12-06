/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 08:55:26 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/06 11:17:00 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	ft_strlen(char *str) {

	int	i = 0;

	while (str[i])
		i++;
	return i;
}

std::string	copyInfile( std::string str, char *s1, char *s2) {
	
	std::string	s;
	int	j = 0;
	unsigned long i = 0;
	while (i < str.size()) {
		if (str[i] == s1[0]) {
			if (str.compare(i, ft_strlen(s1), s1) == 0) {
				s.append(str, j, i - j);
				s.append(s2);
				j = i + ft_strlen(s1);
			}
		}
		i++;
	}
	s.append(str, j, i - j);
	return s;
}

void	sendOutfile( std::string s, char *fileName) {
	
	std::string str(fileName);
	str.append(".replace");
	
	std::ofstream	ofs(str.c_str());
	ofs << s;
}

int	main(int ac, char **av)
{
	std::ifstream	ifs(av[1]);
	std::string s;
	char c;

	if (!ifs.is_open()) {
		std::cerr << "Failed opening file" << std::endl;
		return 1;
	}
	while(ifs.get(c))
		s.push_back(c);
	ifs.close();
	if (ac == 4) {
		s = copyInfile(s, av[2], av[3]);
		sendOutfile(s, av[1]);
	}
	else
		std::cerr << "Invalid argument ! Format must be ./sed <fileName> <s1> <s2>" << std::endl;
}