/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:20:25 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 17:09:48 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

/*---- includes --------------------------------------------------------------*/

# include "ClapTrap.hpp"

/*---- class defines ---------------------------------------------------------*/

class	ScavTrap : virtual public ClapTrap
{

	public :

		ScavTrap( void );
		ScavTrap( std::string _name );
		ScavTrap( ScavTrap const & copy );
		~ScavTrap( void );

		ScavTrap &	operator=( ScavTrap const & right_value);

		std::size_t	hitPointsGet( void ) const;
		std::size_t	energyPointsGet( void ) const;
		std::size_t	attackDamageGet( void ) const;

		void		guardGate( void );
		void		attack( const std::string& target );

		private :

			static std::size_t	_hit_points_sets;
			static std::size_t	_energy_points_sets;
			static std::size_t	_attack_damage_sets;

};

#endif