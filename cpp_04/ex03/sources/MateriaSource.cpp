/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:03 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:23:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*---- constructors & destructor ---------------------------------------------*/

MateriaSource::MateriaSource( void )
{
	for ( int i = 0; i < 3; i++ )
		_spells_inventory[i] = NULL;

	std::cout << GREY << D_CONSTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & copy )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

MateriaSource &	MateriaSource::operator=( MateriaSource const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	MateriaSource::learnMateria( AMateria* type ) //on va voir le nom
{
	( void )type;
	std::cout << "learn Materia" << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	( void )type;
	std::cout << "create Materia" << std::endl;
	return ( NULL );
}
