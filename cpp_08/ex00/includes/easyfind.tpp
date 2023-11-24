/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:50:25 by twang             #+#    #+#             */
/*   Updated: 2023/11/24 10:36:03 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

/*---- includes --------------------------------------------------------------*/

# include "easyfind.h"

/*---- exceptions defines ----------------------------------------------------*/

class	NoMatchFoundException : public std::exception
{

	public :

		virtual const char*	what() const throw();

};

const char*	NoMatchFoundException::what() const throw()
{
	return ( RED"No match found in this container."END );
}

/*---- templates functions defines -------------------------------------------*/

template< typename T >
int	easyfind( T vector, int found )
{
	if( std::find( vector.begin( ), vector.end( ), found ) == vector.end( ) )
		throw NoMatchFoundException();

	return ( found );
}

#endif