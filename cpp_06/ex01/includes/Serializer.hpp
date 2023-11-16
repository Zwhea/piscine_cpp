/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:23 by twang             #+#    #+#             */
/*   Updated: 2023/11/16 17:17:57 by twang            ###   ########.fr       */
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

		Serializer( void );
		Serializer( Serializer const & copy );
		Serializer & operator=( Serializer const & right_value );
		~Serializer( void );

		static uintptr_t	serialize( Data *ptr );
		static Data*		deserialize( uintptr_t raw );

};


#endif