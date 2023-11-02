/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/02 16:36:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main( void )
{
	Point	a;
	Point	b( 2.f, 0.f );
	Point	c( 0.f, 2.f );
	Point	point( 0.5, 0.5 );
	Point	edge_point( 1, 1 );
	Point	on_point;

	if (!bsp( a, b, c, point ))
		std::cout << RED << "The point is not inside the triangle." << END << std::endl;
	else
		std::cout << GREEN << "The point is inside the triangle." << END << std::endl;

	if (!bsp( a, b, c, edge_point ))
		std::cout << RED << "The point is not inside the triangle." << END << std::endl;
	else
		std::cout << GREEN << "The point is inside the triangle." << END << std::endl;

	if (!bsp( a, b, c, on_point ))
		std::cout << RED << "The point is not inside the triangle." << END << std::endl;
	else
		std::cout << GREEN << "The point is inside the triangle." << END << std::endl;

	return ( 0 );
}
