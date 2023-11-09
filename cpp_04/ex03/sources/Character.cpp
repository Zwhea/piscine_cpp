/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:50:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 13:36:05 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Character::Character( void ) : _name( "Undefined" )
{
	for ( int i = 0; i < 4; i++ )
		_items_inventory[i] = NULL;

	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::Character( std::string name ) : _name( name )
{
	for ( int i = 0; i < 4; i++ )
		_items_inventory[i] = NULL;

	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::Character( Character const & copy ) : _name( copy._name )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from Character." << END << std::endl;
}

Character::~Character( void )
{
	for ( int i = 0; i < 4; i++ )
	{
		if ( _items_inventory[i] )
		{
			delete _items_inventory[i];
			_items_inventory[i] = NULL;
		}
	}
	// std::cout << GREY << DESTRUCTOR << " ~ from Character." << END << std::endl;
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
	int	i;

	if ( m == 0 )
		return ;
	for ( i = 0; i < 4; i++ )
	{
		if ( !_items_inventory[i] )
		{
			_items_inventory[i] = m;
			return ;
		}
	}
	std::cout << RED;
	std::cout << "You've reached items inventory's limit ! ";
	std::cout << END << std::endl;

	delete m;
}

void	Character::unequip( int idx )
{
	if ( idx > 3 )
	{
		std::cout << RED;
		std::cout << "The item's inventory has only 4 slot." << END << std::endl;
		return ;
	}
	if ( !_items_inventory[idx] )
	{
		std::cout << RED;
		std::cout << "This inventory's slot is empty." << END << std::endl;
		return ;
	}
	std::cout << GREY;
	std::cout << "The spell *" << END;
	std::cout << _items_inventory[idx]->getType( );
	std::cout << GREY;
	std::cout << "* is unequiped and left on the floor" << END << std::endl;
	_items_inventory[idx] = NULL;
}



void	Character::use( int idx, ICharacter& target )
{
	if ( idx > 3 )
	{
		std::cout << RED;
		std::cout << "The item's inventory has only 4 slot." << END << std::endl;
		return ;
	}
	if ( !_items_inventory[idx] )
	{
		std::cout << RED;
		std::cout << "This inventory's slot is empty." << END << std::endl;
		return ;
	}
	if ( target.getName() == _name )
	{
		if ( _items_inventory[idx]->getType() == "ice" )
		{
			std::cout << "Wow stop ! I can't attack myself !" << std::endl;
			return ;
		}
	}
	std::cout << _name << " : ";
	_items_inventory[idx]->use( target );
	delete _items_inventory[idx];
	_items_inventory[idx] = NULL;
}
