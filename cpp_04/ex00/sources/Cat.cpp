/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:50 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 11:15:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Cat::Cat( void )
{
	type = "Cat";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Cat." << END << std::endl;
}

Cat::Cat( Cat const & copy ) : Animal( "Cat" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Cat." << END << std::endl;
}

Cat::~Cat( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Cat." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Cat	&	Cat::operator=( Cat const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	Cat::makeSound( void ) const
{
	std::cout << PURPLE << "Meow..." << END << std::endl;
}
