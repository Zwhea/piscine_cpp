/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:53:12 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 13:01:42 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	sed_is_for_losers( char *buffer, char *to_replace, char *replace_with )
{
	std::string	new_buffer = buffer;
	std::string	new_toreplace = to_replace;
	std::string	new_replacewith = replace_with;

	// std::size_t	found = new_buffer.find( to_replace );
	// if ( found )
	// {
	// 	new_buffer.erase (found, new_toreplace.size());
	// 	new_buffer.insert (found, replace_with);
	// }
	// std::cout << new_buffer << std::endl;

	delete[] buffer;
}
/*
find retourne -1 ou 0 si il trouve pas.
boucler tant que found trouve.
a la fin de la boucle rajouter a find,
la longueur de la string que tu viens de remplacer*/