/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:50:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 15:52:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "ICharacter.hpp"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class	Character : public ICharacter
{

	public :

		Character( void );
		Character( std::string name );
		Character( Character const & copy );
		Character & operator=( Character const & right_value );
		~Character( void );

		std::string const &	getName( void ) const ;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

	private :

		std::string	_name;
		AMateria	*_items_inventory[4];

};

#endif