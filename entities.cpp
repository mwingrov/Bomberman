/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entities.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:19:27 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/24 16:33:09 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "entities.hpp"

//start canonical form
Entities::Entities(void) : _foo(0)
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

Entities::Entities(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

Entities::Entities(Entities const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Entities::~Entities(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Entities	&Entities::operator=(Entities const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getfoo();
	return (*this);
}
//end canonical form

std::ostream	&operator<<(std::ostream &out, Entities const &value)
{
	out << value.getfoo();
	return (out);
}

int	Entities::getfoo(void) const
{
	return (this->_foo);
}
