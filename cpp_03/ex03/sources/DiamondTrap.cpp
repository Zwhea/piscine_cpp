/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:21 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/03 23:25:02 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FrapTrap.hpp"
#include "DiamondTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

DiamondTrap::DiamondTrap( void )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

DiamondTrap::DiamondTrap( std::string _name ) :
	ClapTrap::ClapTrap( _name + "_clap_name" ), ScavTrap::ScavTrap( _name ), FrapTrap::FrapTrap( _name )
{
	this->_name = _name;
	this->_hit_points = FrapTrap::getHitPoints( );
	this->_energy_points = ScavTrap::getEnergyPoints( );
	this->_attack_damage = FrapTrap::getAttackDamage( );
	std::cout << RED << _name << " - ";
	std::cout << this->_hit_points << " ";
	std::cout << this->_energy_points << " ";
	std::cout << this->_attack_damage << END << std::endl;
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy )
{
	*this = copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

DiamondTrap	&	DiamondTrap::operator=( DiamondTrap const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	_name = right_value._name;
	_hit_points = right_value._hit_points;
	_energy_points = right_value._energy_points;
	_attack_damage = right_value._attack_damage;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Hello ! My name is " << _name;
	std::cout << " and my grand mother's name is " << ClapTrap::_name << std::endl;
}
