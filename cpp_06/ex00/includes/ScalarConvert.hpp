/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:32:19 by twang             #+#    #+#             */
/*   Updated: 2023/11/15 14:51:38 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

class ScalarConvert
{

	public :

		ScalarConvert( void );
		ScalarConvert( ScalarConvert const & copy );
		ScalarConvert & operator=( ScalarConvert const & right_value );
		~ScalarConvert( void );

		static void	convert( std::string base );

	class	NotPrintableException : public std::exception
	{

		public:

			virtual const char*	what( void ) const throw( )
			{
				return ( RED"This char is not printable\n"END );
			}

	};

};

#endif