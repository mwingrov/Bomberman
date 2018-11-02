/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:24:15 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:39:52 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_HPP
# define WORLD_HPP

# include <iostream>
# include "entities.hpp"

class World : public Entities
{
	public:
		//start canonical form
		World(void);
		World(int const n);
		World(World const & src);
		~World(void);

		World	&operator=(World const &rhs);
		//end canonical form

		int	getfoo(void) const;
	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &out, World const &value);

#endif
