/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:13:16 by twang             #+#    #+#             */
/*   Updated: 2023/12/05 14:25:47 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

/*---- includes --------------------------------------------------------------*/

# include "RPN.h"

/*---- prototypes ------------------------------------------------------------*/

bool	parseArg( std::string argument );
void	reversePolishNotation( std::string argument );
void	operate( std::stack< int >& stash, char sign );

void	sum( std::stack< int >& stash );
void	sub( std::stack< int >& stash );
void	mult( std::stack< int >& stash );
void	div( std::stack< int >& stash );

#endif