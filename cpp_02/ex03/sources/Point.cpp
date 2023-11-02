/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:20:46 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/02 16:30:40 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Point::Point( void ) : x( 0 ), y( 0 )
{
}

Point::Point( float const x, float const y ) : x( x ), y( y )
{
}

Point::Point( Point const & copy ) : x( copy.x ), y( copy.y )
{
}

Point::~Point()
{
}

Point &	Point::operator=( Point const & right_value )
{
	this->~Point( );
	new(this) Point(right_value.x.toFloat( ), right_value.y.toFloat( ));

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

Fixed	Point::getX( void ) const
{
	return ( x );
}

Fixed	Point::getY( void ) const
{
	return ( y );
}
