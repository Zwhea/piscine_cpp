/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/18 15:48:02 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	increment( int & a )
{
	std::cout << "increment" << std::endl;
	a++;
	return ( a );
}

int		main( void )
{
	int	array[3] = { 0, 1, 2 };

	int	i = 0;

	for ( i = 0; i < 3; i++ )
	{
		std::cout << array[i] << std::endl;
		increment( array[i] );
	}
	for ( i = 0; i < 3; i++ )
	{
		std::cout << array[i] << std::endl;
	}
	::iter( array, 3, &increment );

	return ( 0 );
}
