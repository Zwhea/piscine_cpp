/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:20:42 by twang             #+#    #+#             */
/*   Updated: 2023/11/02 17:29:31 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

/*---- includes --------------------------------------------------------------*/

#include "ClapTrap.h"

/*---- class defines ---------------------------------------------------------*/

class	ClapTrap
{

	public :

		ClapTrap( void );
		ClapTrap( std::string _name );
		ClapTrap( ClapTrap const & copy );
		~ClapTrap( void );

		ClapTrap &	operator=( ClapTrap const & right_value );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private :

		std::string	_name;
		std::size_t	_hit_points;
		std::size_t	_energy_points;
		std::size_t	_attack_damage;

};

#endif