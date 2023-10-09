/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:26:56 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/09 17:38:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

/*---- includes --------------------------------------------------------------*/

# include "Weapon.hpp"

/*---- class define ----------------------------------------------------------*/

class HumanB
{

	private:

		std::string	name;
		Weapon*		weapon;

	public:

		HumanB( std::string new_name );
		~HumanB();
		void	attack( void );
		void	setWeapon( Weapon &new_weapon );

};

#endif