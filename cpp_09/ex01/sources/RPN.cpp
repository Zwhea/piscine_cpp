/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:13:38 by twang             #+#    #+#             */
/*   Updated: 2023/12/05 14:26:30 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	parseArg( std::string argument )
{
	std::size_t	numbers = 0;
	std::size_t	sign = 0;
	std::size_t	size = 0;

	for ( std::size_t i = 0; i < argument.size(); i++ )
	{
		if ( !( argument[i] >= '0' && argument[i] <= '9' ) \
		&& argument[i] != ' ' && argument[i] != '+' && argument[i] != '-' \
		&& argument[i] != '/' && argument[i] != '*' )
			throw std::invalid_argument( RED INV_CHAR END );
		if ( ( argument[i] >= '0' && argument[i] <= '9' ) \
				|| argument[i] == '+' || argument[i] == '-' \
				|| argument[i] == '/' || argument[i] == '*' )
		{
			size++;
			if ( argument[i] >= '0' && argument[i] <= '9' )
				numbers++;
			else
				sign++;
		}
		else
			size = 0;
		if ( size > 1 )
			throw std::invalid_argument( RED INV_NB END );
	}
	if ( numbers < 1 )
		throw std::invalid_argument( RED NBR_PB END );
	if ( sign < 1 )
		throw std::invalid_argument( RED SIGN_PB END );
	if ( sign + 1 != numbers )
		throw std::invalid_argument( RED NBR_PB END );
	return ( true );
}

void	reversePolishNotation( std::string argument )
{
	std::stack< int > stash;

	for ( std::size_t i = 0; i < argument.size(); i++ )
	{
		if ( argument[i] >= '0' && argument[i] <= '9' )
		{
			std::string str( 1, argument[i] );
			int	nb = std::atoi( str.c_str() );
			stash.push( nb );
		}
		if ( std::strchr( OPERATORS, argument[i] ))
		{
			operate( stash, argument[i] );
		}
	}
	if ( stash.size() == 1 )
	{
		int result = stash.top();
		std::cout << BLUE << result << END << std::endl;
	}
}

void	operate( std::stack< int >& stash, char sign )
{
	std::string	operators[4] = { "+", "-", "*", "/" };
	std::size_t	i = 0;

	if ( stash.size() < 2 )
		throw std::invalid_argument( RED NBR_PB END );

	for ( i = 0; i < 4; i++ )
		if ( sign == operators[i][0] )
			break ;

	switch( i )
	{
		case 0 :
			sum( stash );
			break ;
		case 1 :
			sub( stash );
			break ;
		case 2 :
			mult( stash );
			break ;
		default :
			div( stash );
			break ;
	}
}

void	sum( std::stack< int >& stash )
{
	int	a = stash.top();
	stash.pop();
	int	b = stash.top();
	stash.pop();

	int result = b + a;
	stash.push( result );
}

void	sub( std::stack< int >& stash )
{
	int	a = stash.top();
	stash.pop();
	int	b = stash.top();
	stash.pop();

	int result = b - a;
	stash.push( result );
}

void	mult( std::stack< int >& stash )
{
	int	a = stash.top();
	stash.pop();
	int	b = stash.top();
	stash.pop();

	int result = b * a;
	stash.push( result );
}

void	div( std::stack< int >& stash )
{
	int	a = stash.top();
	stash.pop();
	int	b = stash.top();
	stash.pop();

	if ( a == 0 )
		throw std::invalid_argument( RED DIV_PB END );
	int result = b / a;
	stash.push( result );
}

