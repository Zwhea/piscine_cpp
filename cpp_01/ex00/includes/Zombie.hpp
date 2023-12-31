/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 09:33:00 by wangthea         ###   ########.fr       */
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

		Zombie( std::string name );
		~Zombie( void );
		Zombie*		newZombie( std::string name );
		void		announce( void );
		void		randomChump( std::string name );

};

#endif