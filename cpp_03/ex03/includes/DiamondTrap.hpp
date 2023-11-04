/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/04 11:53:03 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

/*---- includes --------------------------------------------------------------*/

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*---- class defines ---------------------------------------------------------*/

class	DiamondTrap : public ScavTrap, public FragTrap
{

	public :

		DiamondTrap( void );
		DiamondTrap( std::string _name );
		DiamondTrap( DiamondTrap const & copy );
		~DiamondTrap( void );

		DiamondTrap &	operator=( DiamondTrap const & right_value);

		void			whoAmI( void );

		private :

			std::string	_name;

};

#endif