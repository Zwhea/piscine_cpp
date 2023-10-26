/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:25:16 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 15:10:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main( int ac, char **av )
{
	char	*buffer;

	if ( ac != 4 )
	{
		print_error( ERR_BADARG );
		return (-1);
	}
	buffer = get_infile( av[1] );
	if (!buffer)
		return (-1);
	sed_is_for_losers( buffer, av[1], av[2], av[3] );
	return (0);
}
