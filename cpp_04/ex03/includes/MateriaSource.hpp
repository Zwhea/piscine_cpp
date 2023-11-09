/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:20:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 09:31:19 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

/*----------------------------------------------------------------------------*/

class MateriaSource : public IMateriaSource
{

	public :

		MateriaSource( void );
		MateriaSource( MateriaSource const & copy );
		MateriaSource & operator=( MateriaSource const & right_value );
		~MateriaSource( void );

		void		learnMateria( AMateria* type );
		AMateria*	createMateria( std::string const & type );

	private :

		AMateria	*_spells_inventory[4];

};

#endif