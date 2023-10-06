/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 10:14:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*---- includes --------------------------------------------------------------*/

# include "Zombie.h"

/*---- class defines ---------------------------------------------------------*/

class Zombie
{
	private:

		std::string	name;

	public:

		Zombie( void );
		~Zombie( void );
		Zombie*	zombieHorde( int N, std::string name );
		void	announce( void );

};

#endif