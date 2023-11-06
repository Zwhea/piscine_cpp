/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:21 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/06 11:13:40 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

DiamondTrap::DiamondTrap( void )
{
	this->_name = "Undefined";
	this->_hit_points = FragTrap::hitPointsGet( );
	this->_energy_points = ScavTrap::energyPointsGet( );
	this->_attack_damage = FragTrap::attackDamageGet( );

	std::cout << GREY << D_CONSTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

DiamondTrap::DiamondTrap( std::string _name )
{
	this->_name = _name;
	ClapTrap::_name = _name + "_clap_name";
	this->_hit_points = FragTrap::hitPointsGet( );
	this->_energy_points = ScavTrap::energyPointsGet( );
	this->_attack_damage = FragTrap::attackDamageGet( );

	std::cout << GREY << _name << CONSTRUCTOR << " ~ from DiamondTrap." << END << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) : ClapTrap( ), ScavTrap( ), FragTrap( )
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

void	DiamondTrap::show_stats( DiamondTrap const & Trap )
{
	std::cout << Trap._name << " : hit points : " << Trap._hit_points;
	std::cout << " / energy points : " << Trap._energy_points;
	std::cout << " / attack damage : " << Trap._attack_damage << std::endl;
}
