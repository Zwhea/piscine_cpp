/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/28 16:37:20 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	Span sp =			Span(5);
	Span st =			Span(10001);
	std::vector< int >	test( 10 );
	std::vector< int >	v;


	try
	{
		for (int i = 0; i < 10000; i++)
		{
			v.push_back(2 * i);
		}
		st.fillContainer(v.begin(), v.end());

		std::cout << YELLOW << st.shortestSpan() << END << std::endl;
		std::cout << PURPLE << st.longestSpan() << END << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(18);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(11);
		// sp.fillContainer(test.begin(), test.end());

		std::cout << YELLOW << sp.shortestSpan() << END << std::endl;
		std::cout << PURPLE << sp.longestSpan() << END << std::endl;

		std::fill( test.begin(), test.end(), 5);
		st.fillContainer(test.begin(), test.end());
	}
	catch ( std::exception & error )
	{
		std::cerr << error.what() << std::endl;
	}

	return ( 0 );
}
