/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:53:12 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 15:14:23 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	sed_is_for_losers( char *buffer, char *name, char *to_replace, char *replace_with )
{
	std::string	new_buffer = buffer;
	std::string	new_toreplace = to_replace;
	std::string	new_replacewith = replace_with;
	std::size_t	found = 0;
	std::size_t	replaced = 0;
	
	while ( found != std::string::npos  && found < new_buffer.length() )
	{
		found = new_buffer.find( new_toreplace, found );
		if ( found == std::string::npos )
			break ;
		new_buffer.erase ( found, new_toreplace.length() );
		new_buffer.insert ( found, new_replacewith );
		found += new_replacewith.length();
		replaced = 1;
	}
	if ( replaced )
	{
		std::ofstream	out;
		std::string		outfile;
		outfile = name;
		outfile.append( ".replace" );
		out.open( outfile.c_str(), std::ios::out );
		out << new_buffer;
		out.close();
	}
	delete[] buffer;
}

/*

find retourne -1 ou 0 si il trouve pas.
boucler tant que found trouve.
a la fin de la boucle rajouter a find,
la longueur de la string que tu viens de remplacer

*/
