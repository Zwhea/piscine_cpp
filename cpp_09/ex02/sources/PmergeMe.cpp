/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:21 by twang             #+#    #+#             */
/*   Updated: 2023/12/06 16:40:19 by twang            ###   ########.fr       */
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
	int										i;

	for ( i = 1; i < ac - 1; i += 2 )
	{
		int min = std::min( atoi( av[i] ), atoi( av[i + 1] ) );
		int max = std::max( atoi( av[i] ), atoi( av[i + 1] ) );
		stashV.push_back( std::make_pair( max, min ) ) ;
	}
	if ( !(ac % 2) )
		stashV.push_back( std::make_pair( atoi( av[i] ), -1 ) );

	merge( stashV );

	// showPairedStashV( stashV );
}

void	PmergeDeque( int ac, char **av )
{
	std::deque< std::pair< int, int > >		stashD;
	int										i;

	for ( i = 1; i < ac - 1; i += 2 )
	{
		int min = std::min( atoi( av[i] ), atoi( av[i + 1] ) );
		int max = std::max( atoi( av[i] ), atoi( av[i + 1] ) );
		stashD.push_back( std::make_pair( max, min ) ) ;
	}

	if ( !(ac % 2) )
		stashD.push_back( std::make_pair( atoi( av[i] ), -1 ) );

	// showPairedStashD( stashD );
}

void	merge( std::vector< std::pair< int, int > >& stash )
{
	std::vector< std::pair< int, int > >::iterator	it = stash.begin();
	std::vector< std::pair< int, int > >			firstHalf;
	std::vector< std::pair< int, int > >			secondHalf;

	for ( std::size_t i = 0; i < stash.size() / 2; i++ )
		firstHalf.push_back( *it++ );
	for ( std::size_t i = ( stash.size() / 2 ) + 1; i <= stash.size(); i++ )
		secondHalf.push_back( *it++ );
	showPairedStashV( firstHalf );
	showPairedStashV( secondHalf );
	if ( firstHalf.size() > 1 )
		merge( firstHalf );
	if ( secondHalf.size() > 1 )
		merge( secondHalf );

}

void	showPairedStashV( std::vector< std::pair< int, int > >& stash )
{
	std::cout << std::endl;
	for ( std::vector< std::pair< int, int > >::iterator it = stash.begin(); it != stash.end(); ++it )
		std::cout << RED << "( " << ( *it ).first << ", " << ( *it ).second << " )" << END << std::endl;
}

void	showPairedStashD( std::deque< std::pair< int, int > >& stash )
{
	std::cout << std::endl;
	for ( std::deque< std::pair< int, int > >::iterator it = stash.begin(); it != stash.end(); ++it )
		std::cout << BLUE << "( " << ( *it ).first << ", " << ( *it ).second << " )" << END << std::endl;
}
