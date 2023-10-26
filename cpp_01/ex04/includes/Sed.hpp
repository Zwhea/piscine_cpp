/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:22:55 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 12:43:55 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

/*---- includes --------------------------------------------------------------*/

# include <iostream>
# include <string>
# include <fstream>

/*---- define ----------------------------------------------------------------*/

# define BLUE	"\001\033[1;34m\002"
# define RED	"\001\033[1;31m\002"
# define YELLOW "\001\033[1;33m\002"
# define GREEN	"\001\033[1;32m\002"
# define PURPLE	"\001\033[1;35m\002"
# define GREY	"\001\033[1;30m\002"

# define END "\001\033[0m\002"
# define BOLD "\001\033[1m\002"
# define ITALIC "\001\033[3m\002"
# define UNDERLINE "\001\033[4m\002"
# define DEL_LINE "\001\033[2K\r\002"

# define ERR_BADARG	"bad number of arguments."
# define ERR_FILE	"couldn't open given file."
# define USAGE		"usage : ./sed_is_for_losers [filename] [string to replace] [string to replace with]"

/*---- prototypes ------------------------------------------------------------*/

void	print_error( std::string msg );
char	*get_infile( char *file );
void	sed_is_for_losers( char *buffer, char *to_replace, char *replace_with );

#endif