/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:21 by twang             #+#    #+#             */
/*   Updated: 2023/12/08 15:49:19 by twang            ###   ########.fr       */
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

void	PmergeVector( int ac, char **av )
{
	std::vector< std::pair< int, int > >	stashV;
	std::vector< int >						original;
	int										i;
	struct timeval							start;

	for ( i = 1; i < ac ; i ++ )
	{
		if ( atoi( av[i] ) < 0 )
			throw std::invalid_argument( RED INV_CHAR END );
		original.push_back( atoi( av[i] ) );
	}

	gettimeofday( &start, NULL );
	std::cout << start.tv_sec << std::endl;
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

	showResult( original, result, 1 );
}

void	PmergeDeque( int ac, char **av )
{
	std::deque< std::pair< int, int > >		stashD;
	std::deque< int >						original;
	int										i;

	for ( i = 1; i < ac ; i ++ )
	{
		original.push_back( atoi( av[i] ) );
		if ( atoi( av[i] ) < 0 )
			throw std::invalid_argument( RED INV_CHAR END );
	}
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

	showResult( original, result, 0 );
}
