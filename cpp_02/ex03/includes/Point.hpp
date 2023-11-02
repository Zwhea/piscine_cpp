/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:19:43 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/02 16:31:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

/*---- includes --------------------------------------------------------------*/

#include "Fixed.h"
#include "Fixed.hpp"

/*---- class defines ---------------------------------------------------------*/

class Point
{

	private:

		Fixed const x;
		Fixed const y;

	public:

		Point( void );
		Point( float const x, float const y );
		Point( Point const & copy );
		~Point();

		Point &	operator=( Point const & copy );
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif