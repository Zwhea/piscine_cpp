/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:21 by twang             #+#    #+#             */
/*   Updated: 2023/12/08 17:20:21 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstring>

bool	parseArg( int ac, char **av )
{
	for ( int i = 1; i < ac; i ++ )
	{
		for ( std::size_t j = 0; j < strlen(av[i]); j++ )
		{
			if ( !( av[i][j] >= '0' && av[i][j] <= '9' ) )
				throw std::invalid_argument( RED INV_CHAR END );
		}
	}
	return ( true );
}

std::size_t	getTimer( struct timeval start )
{
	struct timeval	current;
	std::size_t		timer;

	if ( gettimeofday( &current, NULL ) == -1 )
		throw std::invalid_argument( RED "Error : gettimeofday failure." END );
	timer = (current.tv_sec - start.tv_sec) * 1000000 + (current.tv_usec - start.tv_usec);

	return (timer);
}

void	PmergeVector( int ac, char **av )
{
	std::vector< std::pair< int, int > >	stashV;
	std::vector< int >						original;
	struct timeval							start;
	int										i;

	for ( i = 1; i < ac ; i ++ )
	{
		if ( atoi( av[i] ) < 0 )
			throw std::invalid_argument( RED INV_NB END );
		original.push_back( atoi( av[i] ) );
	}

	if ( isSorted( original ) )
		throw std::invalid_argument( RED "It is already sorted" END );

	if ( gettimeofday( &start, NULL ) == -1 )
		throw std::invalid_argument( RED "Error : gettimeofday failure." END );
	for ( i = 1; i < ac - 1; i += 2 )
	{
		int min = std::min( atoi( av[i] ), atoi( av[i + 1] ) );
		int max = std::max( atoi( av[i] ), atoi( av[i + 1] ) );
		stashV.push_back( std::make_pair( max, min ) ) ;
	}
	if ( !(ac % 2) )
		stashV.push_back( std::make_pair( atoi( av[i] ), -1 ) );

	std::vector< std::pair< int, int > >	stash = merge( stashV );
	
	std::vector< int >	lower = getLower< std::vector< int >, std::vector< std::pair< int, int > > >( stash );
	std::vector< int >	upper = getUpper< std::vector< int >, std::vector< std::pair< int, int > > >( stash );

	std::vector< int >	result = insert( lower, upper );

	std::size_t	timer = getTimer( start );

	showResult( original, result, 1, timer );
}

void	PmergeDeque( int ac, char **av )
{
	std::deque< std::pair< int, int > >		stashD;
	std::deque< int >						original;
	struct timeval							start;
	int										i;

	for ( i = 1; i < ac ; i ++ )
	{
		if ( atoi( av[i] ) < 0 )
			throw std::invalid_argument( RED INV_NB END );
		original.push_back( atoi( av[i] ) );
	}

	if ( isSorted( original ) )
		throw std::invalid_argument( RED "It is already sorted" END );

	if ( gettimeofday( &start, NULL ) == -1 )
		throw std::invalid_argument( RED "Error : gettimeofday failure." END );
	for ( i = 1; i < ac - 1; i += 2 )
	{
		int min = std::min( atoi( av[i] ), atoi( av[i + 1] ) );
		int max = std::max( atoi( av[i] ), atoi( av[i + 1] ) );
		stashD.push_back( std::make_pair( max, min ) ) ;
	}
	if ( !(ac % 2) )
		stashD.push_back( std::make_pair( atoi( av[i] ), -1 ) );

	std::deque< std::pair< int, int > >	stash = merge( stashD );
	
	std::deque< int >	lower = getLower< std::deque< int >, std::deque< std::pair< int, int > > >( stash );
	std::deque< int >	upper = getUpper< std::deque< int >, std::deque< std::pair< int, int > > >( stash );

	std::deque< int >	result = insert( lower, upper );

	std::size_t	timer = getTimer( start );

	showResult( original, result, 0, timer );
}
