/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/06 11:07:16 by twang            ###   ########.fr       */
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

		DiamondTrap( std::string _name );
		DiamondTrap( DiamondTrap const & copy );
		~DiamondTrap( void );

		DiamondTrap &	operator=( DiamondTrap const & right_value);

		void			whoAmI( void );
		void			show_stats( DiamondTrap const & Trap );

	private :

		DiamondTrap( void );
		std::string	_name;

};

#endif