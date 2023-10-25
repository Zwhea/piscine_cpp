/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:25:16 by twang             #+#    #+#             */
/*   Updated: 2023/10/25 16:22:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	bad_arg( int error )
{
	std::cout << "bad_arg" << std::endl;
	
	return ( error );
}

int	error(int error_id)
{
	const int(Sed::*)functions_tab[] = {&Sed::bad_arg};

	return ((functions_tab[error_id])(error_id));
}

int	main( int ac, char **av )
{
	(void)av;
	if (ac != 4)
		return (error(1));
	std::cout << "main" << std::endl;
	return (0);
}
