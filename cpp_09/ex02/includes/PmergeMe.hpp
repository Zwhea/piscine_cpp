/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:04 by twang             #+#    #+#             */
/*   Updated: 2023/12/06 14:58:46 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

/*---- includes --------------------------------------------------------------*/

# include "PmergeMe.h"

/*---- prototypes ------------------------------------------------------------*/

bool	parseArg( int ac, char **av );
void	PmergeVector( int ac, char **av );
void	PmergeDeque( int ac, char **av );

void	merge( std::vector< std::pair< int, int > >& stash );

void	showPairedStashV( std::vector< std::pair< int, int > >& stash );
void	showPairedStashD( std::deque< std::pair< int, int > >& stash );

#endif