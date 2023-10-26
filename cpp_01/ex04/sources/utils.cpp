/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:28:16 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 12:59:46 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	print_error( std::string msg )
{
	std::cout << RED << "error : " << msg << END << std::endl;
	std::cout << GREEN << USAGE << END << std::endl;
}


