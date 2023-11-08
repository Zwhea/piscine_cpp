/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:54:17 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:04:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

/*---- constructors & destructor ---------------------------------------------*/

IMateriaSource::IMateriaSource( void )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from IMateriaSource." << END << std::endl;
}

IMateriaSource::IMateriaSource( IMateriaSource const & copy )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from IMateriaSource." << END << std::endl;
}

IMateriaSource::~IMateriaSource( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from IMateriaSource." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

IMateriaSource &	IMateriaSource::operator=( IMateriaSource const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}
