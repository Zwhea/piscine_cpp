/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:14:09 by twang             #+#    #+#             */
/*   Updated: 2023/12/08 14:43:07 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

/*---- includes --------------------------------------------------------------*/

# include "PmergeMe.h"

/*---- templates -------------------------------------------------------------*/

template< typename T >
void	showPairedStash( T& stash )
{
	std::cout << std::endl;
	for ( typename T::iterator it = stash.begin(); it != stash.end(); ++it )
	{
		std::cout << RED << "( " << ( *it ).first << ", ";
		std::cout << ( *it ).second << " )" << END << std::endl;
	}
}

template< typename T >
void	showStash( T & stash )
{
	std::cout << std::endl;
	for ( typename T::iterator it = stash.begin(); it != stash.end(); ++it )
		std::cout << BLUE << "( " << *it << " )" << END << std::endl;
}

template< typename T >
void	showResult( T& original, T& result, int type )
{
	std::cout << "Before\t: ";
	for ( typename T::iterator it = original.begin(); it != original.end(); ++it )
		std::cout << PURPLE << *it << " " << END;
	std::cout << "\nAfter\t: ";
	for ( typename T::iterator it = result.begin(); it != result.end(); ++it )
		std::cout << BLUE << *it << " " << END;
	std::cout << "\nTime to process a range of " << original.size();
	if ( type )
		std::cout << " elements with std::vector : " << std::endl;
	else
		std::cout << " elements with std::deque : " << std::endl;
}

template< typename T, typename U >
T	getUpper( U & stash )
{
	T	upper;

	for ( typename U::iterator it = stash.begin(); it != stash.end(); ++it )
		upper.push_back( ( *it ).first );
	return ( upper );
}

template< typename T, typename U >
T	getLower( U & stash )
{
	T	lower;

	for ( typename U::iterator it = stash.begin(); it != stash.end(); ++it )
	{
		if ( ( *it ).second == -1 )
			continue ;
		lower.push_back( ( *it ).second );
	}
	return ( lower );
}

template< typename T >
T	merge( T & stash )
{
	typename T::iterator	it = stash.begin();
	T			firstHalf;
	T			secondHalf;
	T			result;

	for ( std::size_t i = 0; i < stash.size() / 2; i++ )
		firstHalf.push_back( *it++ );
	for ( std::size_t i = ( stash.size() / 2 ); i < stash.size(); i++ )
		secondHalf.push_back( *it++ );

	if ( firstHalf.size() > 1 )
		firstHalf = merge( firstHalf );
	if ( secondHalf.size() > 1 )
		secondHalf = merge( secondHalf );

	std::merge( firstHalf.begin(), firstHalf.end(), secondHalf.begin(), secondHalf.end(), std::back_inserter( result ) );

	return( result );
}

template< typename T >
T	ernstJacobsthal( std::size_t size )
{
	T	result;
	std::size_t	prev = 1;
	std::size_t	next = 1;
	std::size_t	i;

	result.push_back(1);
	while ( next < size )
	{
		i = next;
		while ( i > prev )
		{
			result.push_back( i );
			i--;
		}
		prev = next;
		next += 2 * i;
	}
	i = size;
	while ( i > prev )
	{
		result.push_back( i );
		i--;
	}
	return( result );
}

template< typename T >
T	insert( T lower, T upper )
{
	T	pos = ernstJacobsthal< T >( lower.size() );
	typename T::iterator	itu = upper.begin();
	typename T::iterator	itl = lower.begin();
	std::size_t				border_min = 0;
	std::size_t				border_max = 0;
	std::size_t				middle = 0;
	std::size_t				inserted = 0;

	for ( typename T::iterator itp = pos.begin(); itp != pos.end(); ++itp )
	{
		itl = lower.begin();
		itu = upper.begin();
		std::advance( itl, *itp - 1 );
		border_min = 0;
		border_max = *itp + inserted;
		while ( border_max - border_min > 1 )
		{
			middle = ( border_min + border_max ) / 2;
			if ( *itl < upper[middle] )
				border_max = middle;
			else
				border_min = middle;
		}
		if ( *itl > upper[0] )
			std::advance( itu, border_max );
		itu = upper.insert( itu, *itl );
		inserted++;
	}

	return( upper );
}

#endif