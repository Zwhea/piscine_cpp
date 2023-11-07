/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:53:42 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 15:46:59 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Brain::Brain( void )
{
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = "Je n'ai pas encore d'idees !\n";
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Brain." << END << std::endl;
}

Brain::Brain( Brain const & copy )
{
	*this = copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Brain." << END << std::endl;
}

Brain::~Brain( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Brain." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Brain	&	Brain::operator=( Brain const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = right_value._ideas[i];

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/
