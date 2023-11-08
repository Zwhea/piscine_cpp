/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:50:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:35:08 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Character::Character( void ) : _name( "Undefined" )
{
	for ( int i = 0; i < 3; i++ )
		_items_inventory[i] = NULL;

	std::cout << GREY << D_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::Character( std::string name ) : _name( name )
{
	for ( int i = 0; i < 3; i++ )
		_items_inventory[i] = NULL;

	std::cout << GREY << D_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::Character( Character const & copy ) : _name( copy._name )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::~Character( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Character." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Character &	Character::operator=( Character const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

std::string const &	Character::getName( void ) const
{
	return ( _name );
}

void	Character::equip( AMateria* m )
{
	( void )m;
	std::cout << "equip" << std::endl;
}

void	Character::unequip( int idx )
{
	( void )idx;
	std::cout << "unequip" << std::endl;
}

void	Character::use( int idx, ICharacter& target )
{
	( void )idx;
	( void )target;
	/*
	La fonction membre use(int, ICharacter&)
	utilisera la Materia de l’emplacement[idx],
	et passera la cible en paramètre à la fonction AMateria::use.
	*/
	std::cout << "use" << std::endl;
}
