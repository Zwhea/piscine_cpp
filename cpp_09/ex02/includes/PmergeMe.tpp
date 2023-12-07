/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:14:09 by twang             #+#    #+#             */
/*   Updated: 2023/12/07 16:05:04 by twang            ###   ########.fr       */
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
		std::cout << RED << "( " << ( *it ).first << ", " << ( *it ).second << " )" << END << std::endl;
}

template< typename T >
void	showStash( T & stash )
{
	std::cout << std::endl;
	for ( typename T::iterator it = stash.begin(); it != stash.end(); ++it )
		std::cout << RED << "( " << *it << " )" << END << std::endl;
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
	T	result;
	T	pos = ernstJacobsthal< T >( upper.size() + lower.size() );

	// showStash( pos );
	for ( typename T::iterator it = pos.begin(); it != pos.end(); ++it )
	{
		// std::cout << *it << std::endl;
		for ( typename T::iterator ite = lower.begin(); ite != lower.end(); ite++ )
		{
			std::cout << *ite << " " << *it << std::endl;
			if ( ite == it )
				std::cout << *ite << std::endl; 
		}
	}

	std::merge( lower.begin(), lower.end(), upper.begin(), upper.end(), std::back_inserter( result ) );

	return( result );
}

#endif