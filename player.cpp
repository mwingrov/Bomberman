/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:19:13 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:39:21 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "player.hpp"
# include "entities.hpp"

//start canonical form
Player::Player(void) : _foo(0)
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

Player::Player(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

Player::Player(Player const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Player::~Player(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Player	&Player::operator=(Player const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getfoo();
	return (*this);
}
//end canonical form

std::ostream	&operator<<(std::ostream &out, Player const &value)
{
	out << value.getfoo();
	return (out);
}

int	Player::getfoo(void) const
{
	return (this->_foo);
}
