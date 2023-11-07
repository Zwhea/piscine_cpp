/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:19:12 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 14:37:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

class	Brain
{

	public :

		Brain( void );
		Brain( Brain const & copy );
		Brain & operator=( Brain const & right_value );
		~Brain( void );

	private :

		std::string	_ideas[ 100 ];

};

#endif