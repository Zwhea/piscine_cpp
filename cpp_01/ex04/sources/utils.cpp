/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:28:16 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 13:22:54 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	print_error( std::string msg )
{
	std::cout << RED << "error : " << msg << END << std::endl;
	std::cout << GREEN << USAGE << END << std::endl;
}

char	*get_infile( char *file )
{
	std::ifstream	infile( file, std::ios::in );
	char			*buffer;
	int				length;
	
	length = 0;
	if (!infile)
		return ( NULL );
	infile.seekg(0, infile.end);
	length = infile.tellg();
	infile.seekg (0, infile.beg);
	buffer = new char [length + 1];
	buffer[length] = '\0';
	infile.read(buffer, length);
	infile.close();
	return (buffer);
}
