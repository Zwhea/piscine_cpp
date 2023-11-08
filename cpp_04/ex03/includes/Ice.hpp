/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:31:07 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:12:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class	Ice : public AMateria
{

	public :

		Ice( void );
		Ice( Ice const & copy );
		Ice & operator=( Ice const & right_value );
		~Ice( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif