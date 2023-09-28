/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/28 15:48:16 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*---- includes --------------------------------------------------------------*/

# include <iostream>
# include <sstream>
# include <string>
# include "Zombie.h"

/*---- class defines ---------------------------------------------------------*/

class Zombie
{
	private:

		std::string	name;

	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		Zombie*	zombieHorde( int N, std::string name );
		void	announce( void );

};

#endif