/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:55:34 by marvin            #+#    #+#             */
/*   Updated: 2023/07/18 11:55:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

		void	exec() const;
	private:
		std::string					_target;
		static std::string const	_shrubbery1;
		static std::string const	_shrubbery2;
		ShrubberyCreationForm();

};

#endif