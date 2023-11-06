/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:47 by twang             #+#    #+#             */
/*   Updated: 2023/11/06 11:08:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	ClapTrap	Isko( "Isko" );
	ScavTrap	son_ombre( "son ombre" );
	FragTrap	son_doudou( "son doudou" );
	DiamondTrap	sa_bave( "sa bave" );

	sa_bave.show_stats( sa_bave );
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
	sa_bave.attack( "Isko" );
	sa_bave.whoAmI( );

	return ( 0 );
}
