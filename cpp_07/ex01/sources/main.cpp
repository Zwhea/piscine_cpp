/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/21 09:59:16 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	increment( int & a )
{
	std::cout << "increment" << std::endl;
	a++;
	return ( a );
}

int	decrement( int & a )
{
	std::cout << "decrement" << std::endl;
	a--;
	return ( a );
}

void	display_int( int place )
{
	std::cout << place << std::endl;
}

void	display_char( char place )
{
	std::cout << place << std::endl;
}

void	toLower( char & place )
{
	std::cout << "toLower" << std::endl;
	if ( ( place >= 'A' && place <= 'Z' ) )
		place += 32;
}

void	toUpper( char  & place )
{
	std::cout << "toUpper" << std::endl;
	if ( ( place >= 'a' && place <= 'z' ) )
		place -= 32;
}

int	main( void )
{
	int		array_int[5] = { 0, 1, 2, 3, 4 };
	char	array_char[5] = { 'A', 'B', 'C', 'D', 'E' };

	::iter( array_char, 5, &display_char );
	::iter( array_char, 5, &toLower );
	::iter( array_char, 5, &display_char );
	::iter( array_char, 5, &toUpper );
	::iter( array_char, 5, &display_char );
	std::cout << std::endl;
	::iter( array_int, 5, &display_int );
	::iter( array_int, 5, &increment );
	::iter( array_int, 5, &display_int );
	::iter( array_int, 5, &decrement );
	::iter( array_int, 5, &display_int );

	return ( 0 );
}
