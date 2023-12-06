/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:11:48 by abiddane          #+#    #+#             */
/*   Updated: 2023/09/27 16:37:27 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <vector>
# include <string>
# include <iostream>
# include <sstream>

class RPN
{
	public:
		RPN();
		~RPN();
		RPN(RPN& copy);

		RPN& operator=(const RPN& other);

		void	init_data(std::string str);
		int		check_data();
		void	rpn(const std::string& expression);
	private:
		std::vector<std::string>	_data;
};

int	error(std::string str);


#endif