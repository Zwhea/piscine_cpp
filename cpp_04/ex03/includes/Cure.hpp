/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:31:07 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:12:28 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class	Cure : public AMateria
{

	public :

		Cure( void );
		Cure( Cure const & copy );
		Cure & operator=( Cure const & right_value );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif