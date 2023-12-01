/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:40:42 by twang             #+#    #+#             */
/*   Updated: 2023/12/01 10:45:58 by twang            ###   ########.fr       */
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

# define ERR_INPUT		"Error : bad input => "

# define INV_DATE		"Error : invalid given file: one of the date listed in the file is wrong, please check again.\n"
# define INV_VALUE		"Error : invalid given file: one of the value listed in the file is wrong, please check again.\n"

# define DATA_RULES		"Usage : < Year-Month-Day | value >. Ex: 2010-10-10 | 1 \n"
# define YEAR_RULES		"Error Type : A valid year must be a positive integer.\n"
# define YEAR_ERR		"Error Type : One of the given dates is before the creation of Bitcoin.\n"
# define YEAR_WARN		"Error Type : One of the given dates is outside the range provided by the database, so we do not guarantee the accuracy of the results given.\n"
# define MON_RULES		"Error Type : A valid month must a positive integer, between 01 and 12.\n"
# define DAY_RULES_0	"Error Type : A valid day must a positive integer, between 01 and 30.\n"
# define DAY_RULES_1	"Error Type : A valid day must a positive integer, between 01 and 31.\n"
/* ne pas oublier Feb exception */
# define VAL_RULES		"Error Type : A valid value must be either a float or a positive integer, between 0 and 1000.\n"

#endif