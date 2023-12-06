/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:14:35 by twang             #+#    #+#             */
/*   Updated: 2023/12/06 09:56:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H


/*---- librairies ------------------------------------------------------------*/

# include <iostream>
# include <stack>
# include <algorithm>
# include <cstring>

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

/*---- defines variables -----------------------------------------------------*/

# define OPERATORS	"+-/*"

/*---- defines errors --------------------------------------------------------*/

# define INV_ARG	"Error : invalid argument.\nUsage : ./RPN \" 1 2 + 3 - 4 * 5 / \""
# define INV_CHAR	"Error : invalid character\nUsage : ./RPN \" 1 2 + 3 - 4 * 5 / \""
# define INV_NB		"Error : invalid number. The numbers passed as arguments have to be less than 10 & without signs."
# define NBR_PB		"Error : invalid numbers. Not enough numbers in the stack for operation."
# define SIGN_PB	"Error : invalid signs. Not enough signs in the stack for operation."
# define DIV_PB		"Error : invalid operation. You can't divide by 0."

#endif