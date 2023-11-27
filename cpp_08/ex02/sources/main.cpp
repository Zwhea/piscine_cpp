/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:35:26 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/27 20:41:10 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int	main( void )
{
	MutantStack< int > mstack;

	mstack.push( 5 );
	mstack.push( 17 );

	std::cout << mstack.top( ) << std::endl;
	mstack.pop( );
	std::cout << mstack.size( ) << std::endl;

	mstack.push( 3 );
	mstack.push( 5 );
	mstack.push( 737 );
	//[...]
	mstack.push( 0 );

	MutantStack< int >::iterator it = mstack.begin( );
	MutantStack< int >::iterator ite = mstack.end( );

	++it;
	--it;

	while ( it != ite )
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack< int > s( mstack );

	return ( 0 );
}