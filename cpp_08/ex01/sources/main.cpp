/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/24 16:35:56 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	Span sp = Span(5);


	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(18);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(11);

		std::cout << YELLOW << sp.shortestSpan() << END << std::endl;
		std::cout << PURPLE << sp.longestSpan() << END << std::endl;
	}
	catch ( std::exception & error )
	{
		std::cerr << error.what() << std::endl;
	}

	return ( 0 );
}
