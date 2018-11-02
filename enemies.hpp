/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:20:11 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:39:31 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMEMIES_HPP
# define EMEMIES_HPP

# include <iostream>
# include "entities.hpp"

class Enemies : public Entities
{
	public:
		//start canonical form
		Enemies(void);
		Enemies(int const n);
		Enemies(Enemies const & src);
		~Enemies(void);

		Enemies	&operator=(Enemies const &rhs);
		//end canonical form

		int	getfoo(void) const;
	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &out, Enemies const &value);

#endif
