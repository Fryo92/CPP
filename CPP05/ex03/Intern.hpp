/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:34:23 by marvin            #+#    #+#             */
/*   Updated: 2023/07/18 14:34:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern
{
	public:
		Intern();
		Intern(Intern const & copy);
		~Intern();

		Intern& operator=(Intern const & other);

		Form	*makeForm(std::string formName, std::string target);

		class InvalidNameException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};

	private:
		typedef struct	sFormList
		{
			std::string const&	name;
			Form*	(*function)(std::string const &);
		}	tFormList;
};

#endif