/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 16:07:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Animal::Animal( void ) : type( "Undefined" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Animal." << END << std::endl;
}

Animal::Animal( std::string new_type ) : type( new_type )
{
	std::cout << GREY << type << CONSTRUCTOR << " ~ from Animal." << END << std::endl;
}

Animal::Animal( Animal const & copy ) : type( copy.type )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Animal." << END << std::endl;
}

Animal::~Animal( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Animal." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Animal	&	Animal::operator=( Animal const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

std::string	Animal::getType( void ) const
{
	return ( type );
}

void	Animal::makeSound( void ) const
{
	std::cout << PURPLE << "Hey, I am an Animal & I am making a sound yo..." << END << std::endl;
}

std::string	Animal::getBrainIdea( int place ) const
{
	( void )place;
	return ( "I don't have a Brain yet..." );
}

void	Animal::setBrainIdea( std::string new_idea, int place ) const
{
	( void )new_idea;
	( void )place;
	std::cout << "I don't have a Brain yet..." << std::endl;
}
