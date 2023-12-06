/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:28:16 by marvin            #+#    #+#             */
/*   Updated: 2023/07/20 11:28:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int	main() {
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
}