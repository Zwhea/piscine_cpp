/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:43:32 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 15:38:04 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <ostream>
# include <cstdlib>
# include <fstream>

/*---- defines ---------------------------------------------------------------*/

# define BLUE		"\001\033[1;34m\002"
# define RED		"\001\033[1;31m\002"
# define YELLOW		"\001\033[1;33m\002"
# define GREEN		"\001\033[1;32m\002"
# define PURPLE		"\001\033[1;35m\002"
# define GREY		"\001\033[1;30m\002"

# define END		"\001\033[0m\002"
# define BOLD		"\001\033[1m\002"
# define ITALIC		"\001\033[3m\002"
# define UNDERLINE	"\001\033[4m\002"
# define DEL_LINE	"\001\033[2K\r\002"
# define TREE		"      %%%,%%%%%%%\n       ,\'%% \\\\-*%%%%%%%\n ;%%%%%*%   _%%%%\"\n  ,%%%       \\(_.*%%%%.\n  % *%%, ,%%%%*(    \'\n%^     ,*%%% )\\|,%%*%,_\n     *%    \\/ #).-\"*%%*\n         _.) ,/ *%,\n _________/)#(_________\n"

/*---- verboses --------------------------------------------------------------*/

# define D_CONSTRUCTOR	"Default constructor called"
# define CONSTRUCTOR	" : constructor called"
# define C_CONSTRUCTOR	"Copy constructor called"
# define DESTRUCTOR		"Default destructor called"

#endif