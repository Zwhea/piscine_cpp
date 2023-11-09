/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:03 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 17:11:53 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*---- constructors & destructor ---------------------------------------------*/

MateriaSource::MateriaSource( void )
{
	for ( int i = 0; i < 4; i++ )
		_spells_inventory[i] = NULL;

	// std::cout << GREY << D_CONSTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & copy )
{
	for ( int i = 0; i < 4; i++ )
		_spells_inventory[i] = copy._spells_inventory[i]->clone( );
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( _spells_inventory[i] )
		{
			delete _spells_inventory[i];
			_spells_inventory[i] = NULL;
		}
	}
	// std::cout << GREY << DESTRUCTOR << " ~ from MateriaSource." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

MateriaSource &	MateriaSource::operator=( MateriaSource const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	for ( int i = 0; i < 4; i++ )
	{
		delete _spells_inventory[i];
		_spells_inventory[i] = right_value._spells_inventory[i]->clone( );
	}

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	MateriaSource::learnMateria( AMateria* type )
{
	int	i;

	for ( i = 0; i < 4; i++)
	{
		if ( !_spells_inventory[i] )
			break ;
	}
	if ( i != 4 )
		_spells_inventory[i] = type;
	else
	{
		std::cout << RED;
		std::cout << "You've reached spells inventory's limit ! ";
		std::cout << END << std::endl;
		delete type;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int	i;

	for ( i = 0; i < 4; i++ )
	{
		if ( _spells_inventory[i] && type == _spells_inventory[i]->getType() )
			return ( _spells_inventory[i]->clone( ) );
	}
	std::cout << RED << "I don't know this one !\n" << END;

	return ( 0 );
}
