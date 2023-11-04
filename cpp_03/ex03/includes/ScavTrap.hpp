/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:20:25 by twang             #+#    #+#             */
/*   Updated: 2023/11/04 11:55:34 by wangthea         ###   ########.fr       */
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

		void	guardGate( void );

};

#endif