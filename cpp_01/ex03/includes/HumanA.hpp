/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:23:18 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 15:38:29 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/*---- includes --------------------------------------------------------------*/

# include "Weapon.hpp"

/*---- class define ----------------------------------------------------------*/

class HumanA
{

	private:

		std::string	name;
		Weapon&		weapon;

	public:

		HumanA( std::string new_name, Weapon& new_weapon);
		~HumanA();
		void	attack( void );

};

#endif