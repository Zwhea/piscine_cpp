/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:24:09 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 11:16:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Dog::Dog( void )
{
	type = "Dog";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Dog." << END << std::endl;
}

Dog::Dog( Dog const & copy ): Animal( "Dog" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Dog." << END << std::endl;
}

Dog::~Dog( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Dog." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Dog	&	Dog::operator=( Dog const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	Dog::makeSound( void ) const
{
	std::cout << PURPLE << "Woof..." << END << std::endl;
}
