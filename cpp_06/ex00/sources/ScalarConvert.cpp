/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:31:36 by twang             #+#    #+#             */
/*   Updated: 2023/11/15 15:56:44 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ScalarConvert::ScalarConvert( void )
{
	
}

ScalarConvert::ScalarConvert( ScalarConvert const & copy )
{
	( void )copy;
}

ScalarConvert::~ScalarConvert( void )
{
	
}

/*---- overload operators ----------------------------------------------------*/

ScalarConvert & ScalarConvert::operator=( ScalarConvert const & right_value )
{
	( void )right_value;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	ScalarConvert::convert( std::string base )
{
	if ( base.length( ) == 1 \
		&& std::isprint( base[0] ) \
			&& !std::isdigit( base[0] ) )
	{
		std::cout << "char : " << base << std::endl;
		/*
		cast en int
		print
		cast en float
		print
		cast en double
		print
		*/
	}

	if ( base == nan )
	
	for ( int i = 0; i < base.length( ); i++ )
	{
		if ( )
	}
}

	// std::cout << GREEN << "string :\t";
	// std::cout << base << END << std::endl;

	// double	a = std::atof( base.c_str( ) );
	// std::cout << GREEN << "double :\t";
	// std::cout << a << END << std::endl;

	// float	b = static_cast<float>( a );
	// std::cout << GREEN << "float :\t\t";
	// std::cout << b << END << std::endl;
	
	// int		c = static_cast<int>( b );
	// std::cout << GREEN << "int :\t\t";
	// std::cout << c << END << std::endl;

	// try
	// {
	// 	char	d = static_cast<char>( c );
	// 	if ( !std::isprint( d ) )
	// 		throw ScalarConvert::NotPrintableException( );
	// 	std::cout << GREEN << "char :\t\t";
	// 	std::cout << d << END << std::endl;
	// }

	// catch ( std::exception & error )
	// {
	// 	std::cerr << error.what( );
	// }