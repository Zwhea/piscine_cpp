/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:31:36 by twang             #+#    #+#             */
/*   Updated: 2023/11/16 16:28:36 by twang            ###   ########.fr       */
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

int	identify( std::string base )
{
	std::string	array[6] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan" };

	int	i;

	for ( i = 0; i < 6; i++ )
	{
		if ( base == array[i] )
			break ;
	}
	if ( i < 3 )
		return FLOAT ;
	else if ( i > 2 && i < 6 )
		return DOUBLE ;

	std::istringstream	test( base );
	int					a;
	double				b;

	test >> a;
	if ( test.eof( ) && !test.fail( ) )
		return INT ;

	std::istringstream	test_2( base );
	test_2 >> b;
	if ( test_2.eof( ) && !test_2.fail( ) )
		return DOUBLE ;

	if ( base.length( ) == 1 \
		&& std::isprint( base[0] ) \
			&& !std::isdigit( base[0] ) )
		return CHAR ;

	if ( base[base.length() - 1] == 'f' )
	{
		base = base.substr( 0, base.length( ) - 1);
		std::istringstream	test_1( base );
		test_1 >> b;
		if ( test_1.eof( ) && !test_1.fail( ) )
			return FLOAT ;
	}

	return ( -1 );
}

void	display( int a, char b, float c, double d, e_type type, std::string base )
{
	std::cout << GREEN << "char : \t\t";
	if ( !isascii( a ) )
		std::cout << "impossible" << END << std::endl;
	else if ( !std::isprint( a ) )
		std::cout << "Non displayable" << END << std::endl;
	else
		std::cout << b << END << std::endl;

	std::cout << GREEN << "int : \t\t";
	if ( d > INT_MAX || d < INT_MIN || base == "nan" || base == "nanf" )
		std::cout << "impossible" << std::endl;
	else
		std::cout << a << END << std::endl;

	if ( type != FLOAT && type != DOUBLE )
	{
		std::cout << GREEN << "float : \t";
		std::cout << c << ".0f" << END << std::endl;

		std::cout << GREEN << "double : \t";
		std::cout << d << ".0" << END << std::endl;
	}

	else
	{
		std::cout << GREEN << "float : \t";
		if ( a - c == 0)
			std::cout << c << ".0f" << END << std::endl;
		else
			std::cout << c << "f" << END << std::endl;

		std::cout << GREEN << "double : \t";
		if ( a - d == 0 )
			std::cout << d << ".0" << END << std::endl;
		else
			std::cout << d << END << std::endl;
	}
}

void	ScalarConvert::convert( std::string base )
{
	if ( identify( base ) < 0 )
		std::cout << RED << "I don't know what it is !" << END << std::endl;

	else if ( identify( base ) == CHAR )
	{
		std::cout << RED << "It's a char !" << END << std::endl;

		char	a = base.c_str( )[0];

		int		b = static_cast<int>( a );
		float	c = static_cast<float>( a );
		double	d = static_cast<double>( a );

		display( b, a, c, d, CHAR, base );
	}

	else if ( identify( base ) == INT )
	{
		std::cout << RED << "It's an int !" << END << std::endl;

		int		a = std::atoi( base.c_str( ) );

		char	b = static_cast<char>( a );
		float	c = static_cast<float>( a );
		double	d = static_cast<double>( a );

		display( a, b, c, d, INT, base );
	}

	else if ( identify( base ) == DOUBLE )
	{
		std::cout << RED << "It's a double !" << END << std::endl;

		double	a = std::atof( base.c_str( ) );

		char	b = static_cast<char>( a );
		float	c = static_cast<float>( a );
		int		d = static_cast<int>( a );

		display( d, b, c, a, DOUBLE, base );
	}

	else if ( identify( base ) == FLOAT )
	{
		std::cout << RED << "It's a float !" << END << std::endl;

		float	a = std::atof( base.c_str( ) );

		char	b = static_cast<char>( a );
		double	c = static_cast<float>( a );
		int		d = static_cast<int>( a );

		display( d, b, a, c, FLOAT, base );
	}
}
