/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 14:45:19 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Dog::Dog( void )
{
	this->_Brain = new Brain();

	type = "Dog";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Dog." << END << std::endl;
}

Dog::Dog( Dog const & copy ): Animal( "Dog" )
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
