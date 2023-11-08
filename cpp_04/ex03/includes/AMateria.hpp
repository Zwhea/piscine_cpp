/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:20:27 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 17:01:55 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "ICharacter.hpp"

/*----------------------------------------------------------------------------*/

class	ICharacter;

class	AMateria
{

	public :

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & copy );
		AMateria & operator=( AMateria const & right_value );
		virtual ~AMateria( void );

		std::string const &	getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );

	protected :

		std::string const	type;

};

#endif