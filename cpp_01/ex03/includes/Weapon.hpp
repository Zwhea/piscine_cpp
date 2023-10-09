/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/09 17:33:15 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <sstream>

/*---- defines ---------------------------------------------------------------*/

# define BLUE	"\001\033[1;34m\002"
# define RED	"\001\033[1;31m\002"
# define YELLOW "\001\033[1;33m\002"
# define GREEN	"\001\033[1;32m\002"
# define PURPLE	"\001\033[1;35m\002"
# define GREY	"\001\033[1;30m\002"
# define END	"\001\033[0m\002"

/*---- class defines ---------------------------------------------------------*/

class Weapon
{
	private:

		std::string	type;

	public:

		Weapon( void );
		Weapon( std::string new_type );
		~Weapon( void );
		const std::string&	getType( void );
		void				setType( std::string const &type_ref );

};

#endif