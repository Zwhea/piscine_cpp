/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:47 by twang             #+#    #+#             */
/*   Updated: 2023/11/04 11:53:03 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap	Isko( "Isko" );
	ScavTrap	son_ombre( "son ombre" );
	FragTrap	son_doudou( "son doudou" );

	Isko.attack( "son ombre" );
	son_ombre.takeDamage( 20 );
	son_ombre.attack( "son doudou" );
	son_doudou.takeDamage( 20 );
	Isko.beRepaired( 10 );
	son_doudou.attack( "son ombre" );
	son_ombre.takeDamage( 30 );
	son_ombre.attack( "Isko" );
	Isko.takeDamage( 20 );
	son_ombre.guardGate( );
	son_doudou.highFivesGuys( );

	return ( 0 );
}
