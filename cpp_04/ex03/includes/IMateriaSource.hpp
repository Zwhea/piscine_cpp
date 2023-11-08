/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 15:03:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class IMateriaSource
{

	public :

		IMateriaSource( void );
		IMateriaSource( IMateriaSource const & copy );
		IMateriaSource & operator=( IMateriaSource const & right_value );
		virtual	~IMateriaSource( void );

		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif