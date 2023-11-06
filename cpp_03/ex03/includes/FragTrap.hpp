/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:32:22 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/06 10:13:09 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

/*---- includes --------------------------------------------------------------*/

# include "ClapTrap.hpp"

/*---- class defines ---------------------------------------------------------*/

class	FragTrap : virtual public ClapTrap
{

	public :

		FragTrap( void );
		FragTrap( std::string _name );
		FragTrap( FragTrap const & copy );
		~FragTrap( void );

		FragTrap &	operator=( FragTrap const & right_value);

		std::size_t	hitPointsGet( void ) const;
		std::size_t	energyPointsGet( void ) const;
		std::size_t	attackDamageGet( void ) const;

		void		highFivesGuys( void );

	private :

		static std::size_t	_hit_points_sets;
		static std::size_t	_energy_points_sets;
		static std::size_t	_attack_damage_sets;

};

#endif