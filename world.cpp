/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:19:42 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:43:13 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "world.hpp"
# include "entities.hpp"

//start canonical form
World::World(void) : _foo(0)
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

World::World(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

World::World(World const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

World::~World(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

World	&World::operator=(World const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getfoo();
	return (*this);
}
//end canonical form

std::ostream	&operator<<(std::ostream &out, World const &value)
{
	out << value.getfoo();
	return (out);
}

int	World::getfoo(void) const
{
	return (this->_foo);
}
