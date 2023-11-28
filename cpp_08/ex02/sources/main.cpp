/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:35:26 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/28 13:58:44 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int	main( void )
{
	MutantStack< int > mstack;

	mstack.displayStatus();

	mstack.push( 5 );
	mstack.push( 17 );

	mstack.pop( );
	mstack.displayStatus();

	mstack.push( 3 );
	mstack.push( 5 );
	mstack.push( 737 );
	//[...]
	mstack.push( 0 );
	mstack.displayStatus();

	MutantStack< int >::iterator it = mstack.begin( );
	MutantStack< int >::iterator ite = mstack.end( );

	mstack.displayStack( it, ite );
	++it;
	mstack.displayStack( it, ite );
	--it;
	mstack.displayStack( it, ite );

	std::stack< int > s( mstack );
	std::cout << "size : " << s.size( ) << std::endl;

	MutantStack< char > sc;
	sc.push('h');
	sc.push('e');
	sc.push('n');
	sc.push('r');
	sc.push('i');
	sc.push('g');
	sc.push('o');
	sc.push('l');
	sc.push('e');

	mstack.displayStatus();
	sc.displayStack( sc.begin(), sc.end() );

	return ( 0 );
}