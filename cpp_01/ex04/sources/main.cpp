/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:25:16 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 13:01:25 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main( int ac, char **av )
{
	if ( ac != 4 )
	{
		print_error( ERR_BADARG );
		return (-1);
	}
	std::ifstream	infile( av[1], std::ios::in );
	char			*buffer;
	int				length;
	
	length = 0;
	if (!infile)
		return ( -1 );
	infile.seekg(0, infile.end);
	length = infile.tellg();
	infile.seekg (0, infile.beg);
	buffer = new char [length];
	infile.read(buffer, length);
	sed_is_for_losers( buffer, av[2], av[3] );
	infile.close();
	return (0);
}
