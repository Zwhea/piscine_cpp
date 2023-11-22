/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:43:32 by twang             #+#    #+#             */
/*   Updated: 2023/11/18 14:43:03 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/*---- includes --------------------------------------------------------------*/

# include "whatever.h"

/*---- templates defines -----------------------------------------------------*/

template< typename T >

T const & min( T const & x, T const & y )
{
	return ( x <= y ? x : y );
}

template< typename T >

T const & max( T const & x, T const & y )
{
	return ( x >= y ? x : y );
}

template< typename T>

void	swap( T & x, T & y )
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif