/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 17:35:48 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Dog::Dog( void )
{
	this->_Brain = new Brain();

	type = "Dog";
	for ( int i = 0; i < 100; i++ )
		_Brain->_ideas[i] = "I want food";

	std::cout << GREY << D_CONSTRUCTOR << " ~ from Dog." << END << std::endl;
}

Dog::Dog( Dog const & copy ): A_Animal( "Dog" )
{
	this->_Brain = new Brain();

	*_Brain = *copy._Brain;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Dog." << END << std::endl;
}

Dog::~Dog( void )
{
	delete _Brain;
	std::cout << GREY << DESTRUCTOR << " ~ from Dog." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Dog	&	Dog::operator=( Dog const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	delete _Brain;
	this->_Brain = new Brain();

	*_Brain = *(right_value._Brain);

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	Dog::makeSound( void ) const
{
	std::cout << PURPLE << "Woof..." << END << std::endl;
}

std::string	Dog::getBrainIdea( int place ) const
{
	return ( _Brain->_ideas[place] );
}

void	Dog::setBrainIdea( std::string new_idea, int place ) const
{
	_Brain->_ideas[place] = new_idea;
}
