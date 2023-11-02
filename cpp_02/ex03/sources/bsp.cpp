/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:21:55 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/02 16:33:59 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Point	vector_pa( a.getX( ).toFloat( ) - point.getX( ).toFloat( ), a.getY( ).toFloat( ) - point.getY( ).toFloat( ) );
	Point	vector_pb( b.getX( ).toFloat( ) - point.getX( ).toFloat( ), b.getY( ).toFloat( ) - point.getY( ).toFloat( ) );
	Point	vector_pc( c.getX( ).toFloat( ) - point.getX( ).toFloat( ), c.getY( ).toFloat( ) - point.getY( ).toFloat( ) );

	Fixed	result;
	int		sign;

	sign = 1;
	result = (( vector_pa.getX( ) * vector_pb.getY( ) ) - (vector_pb.getX( ) * vector_pa.getY( )));
	if (result <= 0)
		sign = -1;
	result = (( vector_pb.getX( ) * vector_pc.getY( ) ) - (vector_pc.getX( ) * vector_pb.getY( )));
	if (result * sign <= 0)
		return ( false );
	result = (( vector_pc.getX( ) * vector_pa.getY( ) ) - (vector_pa.getX( ) * vector_pc.getY( )));
	if (result * sign <= 0)
		return ( false );

	return ( true );
}
