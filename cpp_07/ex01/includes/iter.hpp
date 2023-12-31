/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:49:18 by twang             #+#    #+#             */
/*   Updated: 2023/11/21 09:15:18 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

/*---- includes --------------------------------------------------------------*/

# include "iter.h"

/*---- templates defines -----------------------------------------------------*/

template< typename T, typename U, typename V >

void	iter( T *array, U arrayLen, V function )
{
	for ( U i = 0; i < arrayLen; i++ )
		( function )( array[i] );
}

#endif
