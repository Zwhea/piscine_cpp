/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 13:02:44 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main( void )
{
	Base *Test = NULL;

	Test = Test->generate( );

	std::cout << GREY << "Base :\t" << Test << END << std::endl;

	if ( Test )
	{
		Test->identify( Test );
		Test->identify( *Test );
	}

	if ( Test )
		delete Test;

	return ( 0 );
}
