/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/23 17:36:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main( void )
{
	std::vector< int >	container;

	container.push_back(5);

	std::cout << container[0] << std::endl;

	return ( 0 );
}