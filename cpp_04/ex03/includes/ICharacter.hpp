/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:08:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 17:03:14 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class	AMateria;

class	ICharacter
{

	public :

		virtual ~ICharacter( void ) {}

		virtual std::string const &	getName( void ) const = 0;
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;

};

#endif