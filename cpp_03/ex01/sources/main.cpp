/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:47 by twang             #+#    #+#             */
/*   Updated: 2023/11/03 21:49:14 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	Isko( "Isko" );
	ScavTrap	son_ombre( "son ombre" );

	Isko.attack( "son ombre" );
	son_ombre.takeDamage( 20 );
	son_ombre.attack( "Isko" );
	Isko.takeDamage( 9 );
	Isko.beRepaired( 10 );
	Isko.attack( "son ombre" );
	son_ombre.takeDamage( 70 );
	son_ombre.attack( "Isko" );
	Isko.takeDamage( 20 );
	son_ombre.guardGate( );

	return ( 0 );
}
