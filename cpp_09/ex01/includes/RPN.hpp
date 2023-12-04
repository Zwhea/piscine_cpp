/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:13:16 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 16:42:20 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

/*---- includes --------------------------------------------------------------*/

# include "RPN.h"

/*---- prototypes ------------------------------------------------------------*/

bool	parseArg( std::string argument );
void	reversePolishNotation( std::string argument );

#endif