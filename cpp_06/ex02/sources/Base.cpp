/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:37:28 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 12:57:55 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Base::Base( void ) { }

Base::~Base( void ) { }

/*---- functions -------------------------------------------------------------*/

Base*	Base::generate( void )
{
	std::srand( time( NULL ) );
	int	a = std::rand( ) % 3;

	switch ( a )
	{

		case 0 :
			return ( new A );

		case 1 :
			return ( new B );

		case 2 :
			return ( new C );

		default :
			std::cout << "error: couldn't initialize the class.\n" << std::endl;
			break ;

	}

	return ( NULL );
}

void	Base::identify( Base* p )
{
	A	*aChild = dynamic_cast< A *>( p );
	if ( aChild )
		std::cout << GREEN << "A :\t" << aChild << std::endl;

	B	*bChild = dynamic_cast< B *>( p );
	if ( bChild )
		std::cout << GREEN << "B :\t" << bChild << std::endl;

	C	*cChild = dynamic_cast< C *>( p );
	if ( cChild )
		std::cout << GREEN << "C :\t" << cChild << std::endl;
}

void	Base::identify( Base& p )
{
	try
	{
		A	&aChild = dynamic_cast< A &>( p );
		std::cout << RED << "A :\t" << &aChild << std::endl;
	}
	catch ( std::exception &error_badcast )
	{ }
	try
	{
		B	&bChild = dynamic_cast< B &>( p );
		std::cout << RED << "B :\t" << &bChild << std::endl;
	}
	catch ( std::exception &error_badcast )
	{ }
	try
	{
		C	&cChild = dynamic_cast< C &>( p );
		std::cout << RED << "C :\t" << &cChild << std::endl;
	}
	catch ( std::exception &error_badcast )
	{ }
}
