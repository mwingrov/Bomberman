/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entities.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:31:34 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 11:50:22 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITIES_HPP
# define ENTITIES_HPP

# include <iostream>
# include <GLFW/glfw3.h>
// # include <GL/glew.h>

class Entities
{
	public:
		//start canonical form
		Entities(void);
		Entities(int const n);
		Entities(Entities const & src);
		~Entities(void);

		Entities	&operator=(Entities const &rhs);
		//end canonical form

		int	getfoo(void) const;
	private:
		int	_foo;
};

std::ostream	&operator<<(std::ostream &out, Entities const &value);

#endif
