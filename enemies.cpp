/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:20:24 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:38:48 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "entities.hpp"
#include "enemies.hpp"

//start canonical form
Enemies::Enemies(void) : _foo(0)
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

Enemies::Enemies(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

Enemies::Enemies(Enemies const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Enemies::~Enemies(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Enemies	&Enemies::operator=(Enemies const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getfoo();
	return (*this);
}
//end canonical form

std::ostream	&operator<<(std::ostream &out, Enemies const &value)
{
	out << value.getfoo();
	return (out);
}

int	Enemies::getfoo(void) const
{
	return (this->_foo);
}
