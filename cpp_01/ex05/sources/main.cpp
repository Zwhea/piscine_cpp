/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:22:17 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 16:11:43 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( void )
{
	Harl	New;
	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for ( int i = 0; i < 4; i++ )
		New.complain( complains[i] );

	return (0);
}
