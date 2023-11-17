/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 13:21:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

/*---- includes --------------------------------------------------------------*/

# include "main.h"

/*----------------------------------------------------------------------------*/

typedef struct s_data	Data;

struct s_data
{
	int	ptr;
};

class	Serializer
{
	public :

		~Serializer( void );

		static uintptr_t	serialize( Data *ptr );
		static Data*		deserialize( uintptr_t raw );

	private :

		Serializer( void );
		Serializer( Serializer const & copy );
		Serializer & operator=( Serializer const & right_value );

};

#endif