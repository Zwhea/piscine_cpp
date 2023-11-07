/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:50 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 14:45:14 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Cat::Cat( void )
{
	this->_Brain = new Brain();

	type = "Cat";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Cat." << END << std::endl;
}

Cat::Cat( Cat const & copy ) : Animal( "Cat" )
{
	this->_Brain = new Brain();

	*_Brain = *copy._Brain;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Cat." << END << std::endl;
}

Cat::~Cat( void )
{
	delete _Brain;
	std::cout << GREY << DESTRUCTOR << " ~ from Cat." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Cat	&	Cat::operator=( Cat const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	delete _Brain;
	this->_Brain = new Brain();

	*_Brain = *right_value._Brain;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	Cat::makeSound( void ) const
{
	std::cout << PURPLE << "Meow..." << END << std::endl;
}
