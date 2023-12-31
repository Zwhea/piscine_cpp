/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:47 by twang             #+#    #+#             */
/*   Updated: 2023/11/03 12:59:47 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap Bab( "Bab" );
	ClapTrap Beb( "Beb" );
	ClapTrap Bib( "Bib" );
	ClapTrap Bob( "Bob" );
	ClapTrap Bub( "Bub" );
	ClapTrap Byb( "Byb" );

	for ( int i = 0; i < 10; i++ )
	{
		Bab.attack( " Beb " );
		Bib.attack( " Bob " );
		Beb.beRepaired( 0 );
		Bob.beRepaired( 0 );
	}
	Bab.attack( " Beb " );
	Beb.beRepaired( 1 );
	return ( 0 );
}
