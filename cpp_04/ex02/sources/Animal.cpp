/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 17:34:37 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---- constructors & destructor ---------------------------------------------*/

A_Animal::A_Animal( void ) : type( "Undefined" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::A_Animal( std::string new_type ) : type( new_type )
{
	std::cout << GREY << type << CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::A_Animal( A_Animal const & copy ) : type( copy.type )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::~A_Animal( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

A_Animal	&	A_Animal::operator=( A_Animal const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

std::string	A_Animal::getType( void ) const
{
	return ( type );
}

void	A_Animal::makeSound( void ) const
{
	std::cout << PURPLE << "Hey, I am an A_Animal & I am making a sound yo..." << END << std::endl;
}

std::string	A_Animal::getBrainIdea( int place ) const
{
	( void )place;
	return ( "I don't have a Brain yet..." );
}

void	A_Animal::setBrainIdea( std::string new_idea, int place ) const
{
	( void )new_idea;
	( void )place;
	std::cout << "I don't have a Brain yet..." << std::endl;
}
