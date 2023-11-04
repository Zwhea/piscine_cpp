/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:32:22 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/04 11:54:06 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

/*---- includes --------------------------------------------------------------*/

# include "ClapTrap.hpp"

/*---- class defines ---------------------------------------------------------*/

class	FragTrap : public ClapTrap
{

	public :

		FragTrap( void );
		FragTrap( std::string _name );
		FragTrap( FragTrap const & copy );
		~FragTrap( void );

		FragTrap &	operator=( FragTrap const & right_value);

		void	highFivesGuys( void );

};

#endif