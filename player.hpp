/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:19:01 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:39:38 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include "entities.hpp"

class Player : public Entities
{
	public:
		//start canonical form
		Player(void);
		Player(int const n);
		Player(Player const & src);
		~Player(void);

		Player	&operator=(Player const &rhs);
		//end canonical form

		int	getfoo(void) const;
	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &out, Player const &value);

#endif
