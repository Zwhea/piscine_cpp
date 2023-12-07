/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:04 by twang             #+#    #+#             */
/*   Updated: 2023/12/07 15:22:53 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

/*---- includes --------------------------------------------------------------*/

# include "PmergeMe.h"
# include "PmergeMe.tpp"

/*---- prototypes ------------------------------------------------------------*/

bool	parseArg( int ac, char **av );
void	PmergeVector( int ac, char **av );
void	PmergeDeque( int ac, char **av );

#endif