/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:19:43 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/01 20:26:21 by wangthea         ###   ########.fr       */
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
};

#endif