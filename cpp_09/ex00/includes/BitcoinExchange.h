/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:40:42 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 14:19:24 by twang            ###   ########.fr       */
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

/*---- defines paths ---------------------------------------------------------*/

# define DATABASE		"./data.csv"

/*---- defines errors --------------------------------------------------------*/

# define INV_ARG		"Error : invalid argument.\nUsage : ./btc input.txt"
# define EXT_FIL		"Error : invalid file: this program allows only < .csv > or < .txt > files type."
# define INV_FIL		"Error : invalid file: the database is invalid, please check the file content again."

# define INV_INPUT		"Error : invalid given file: the given database is invalid, please check the file content again."

// # define VAL_RULES		"Error Type : A valid value must be either a float or a positive integer, between 0 and 1000."
# define ERR_INPUT		"Error : invalid value: A valid value must be either a float or a positive integer, between 0 and 1000."
# define BAD_INPUT		"Type : bad input → "
# define NOT_POS		"Type : not a positive number."
# define TOO_LARG		"Type : too large a number."

# define INV_VALUE		"Error : invalid given file: one of the value listed in the file is wrong, please check again."

# define INV_DATE		"Error : invalid date: one of the date listed in the file is wrong, please check again."

# define YEAR_WARN_0	"Warning : One of the given dates is outside the range provided by the database, so we do not guarantee the accuracy of the results given."
# define YEAR_WARN_1	"Warning : One of the given dates is before the creation of Bitcoin."
# define MON_ERR		"Type : A valid month must a positive integer, between 01 and 12."
# define DAY_ERR_0		"Type : A valid day must a positive integer, between 01 and 30."
# define DAY_ERR_1		"Type : A valid day must a positive integer, between 01 and 31."
# define DAY_ERR_2		"Type : A valid day must a positive integer, between 01 and 28, it's February."
# define DAY_ERR_3		"Type : A valid day must a positive integer, between 01 and 29, it's February and it's a leap year."

#endif