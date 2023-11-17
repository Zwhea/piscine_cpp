/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:32:19 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 12:54:57 by twang            ###   ########.fr       */
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

		~ScalarConvert( void );
		static void	convert( std::string base );

	private :

		ScalarConvert( void );
		ScalarConvert( ScalarConvert const & copy );
		ScalarConvert & operator=( ScalarConvert const & right_value );

};

#endif