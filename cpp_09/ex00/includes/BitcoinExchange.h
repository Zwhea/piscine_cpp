/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:40:42 by twang             #+#    #+#             */
/*   Updated: 2023/11/30 11:00:52 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define  BITCOINEXCHANGE_H

/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>
# include <algorithm>

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

/*---- defines paths ---------------------------------------------------------*/

# define DATABASE	"./data.csv"

/*---- defines errors --------------------------------------------------------*/

# define INV_ARG	"Error : invalid argument.\nUsage : ./btc input.txt"
# define INV_FIL	"Error : invalid file: this program allows only < .csv > or < .txt > files type."

#endif