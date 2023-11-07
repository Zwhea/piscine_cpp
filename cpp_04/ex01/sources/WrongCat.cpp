/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:29:41 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 13:13:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*---- constructors & destructor ---------------------------------------------*/

WrongCat::WrongCat( void )
{
	type = "WrongCat";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from WrongCat." << END << std::endl;
}

WrongCat::WrongCat( WrongCat const & copy ) : WrongAnimal( "WrongCat" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from WrongCat." << END << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from WrongCat." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

WrongCat	&	WrongCat::operator=( WrongCat const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	WrongCat::makeSound( void ) const
{
	std::cout << PURPLE << "Wrong Meow..." << END << std::endl;
}
