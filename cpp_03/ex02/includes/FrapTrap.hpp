/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:32:22 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/03 21:40:09 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_HPP
# define FRAPTRAP_HPP

/*---- includes --------------------------------------------------------------*/

# include "ClapTrap.hpp"

/*---- class defines ---------------------------------------------------------*/

class	FrapTrap : public ClapTrap
{

	public :

		FrapTrap( void );
		FrapTrap( std::string _name );
		FrapTrap( FrapTrap const & copy );
		~FrapTrap( void );

		FrapTrap &	operator=( FrapTrap const & right_value);

		void	highFivesGuys( void );

};

#endif