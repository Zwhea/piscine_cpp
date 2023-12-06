/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:47:49 by twang             #+#    #+#             */
/*   Updated: 2023/12/06 12:24:59 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <utility>

/*---- defines ---------------------------------------------------------------*/

# define BLUE			"\001\033[1;34m\002"
# define RED			"\001\033[1;31m\002"
# define YELLOW			"\001\033[1;33m\002"
# define GREEN			"\001\033[1;32m\002"
# define PURPLE			"\001\033[1;35m\002"
# define GREY			"\001\033[1;30m\002"

# define END			"\001\033[0m\002"
# define BOLD			"\001\033[1m\002"
# define ITALIC			"\001\033[3m\002"
# define UNDERLINE		"\001\033[4m\002"
# define DEL_LINE		"\001\033[2K\r\002"

/*---- defines errors --------------------------------------------------------*/

# define INV_ARG	"Error : invalid argument.\nUsage : ./PmergeMe \" 3 5 9 7 4 \""
# define INV_CHAR	"Error : invalid character\nUsage : ./PmergeMe \" 3 5 9 7 4 \""
# define INV_NB		"Error : invalid number. This program use a positive integer sequence as argument."

#endif