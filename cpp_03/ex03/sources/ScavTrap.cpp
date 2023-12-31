/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:39:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/06 10:37:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

std::size_t	ScavTrap::_hit_points_sets;
std::size_t	ScavTrap::_energy_points_sets;
std::size_t	ScavTrap::_attack_damage_sets;

/*---- constructors & destructor ---------------------------------------------*/

ScavTrap::ScavTrap( void )
{
	this->_name = "Undefined";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	this->_hit_points_sets = 100;
	this->_energy_points_sets = 50;
	this->_attack_damage_sets = 20;

	std::cout << GREY << D_CONSTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

ScavTrap::ScavTrap( std::string _name ) :
	ClapTrap::ClapTrap( _name )
{
	this->_name = _name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	this->_hit_points_sets = 100;
	this->_energy_points_sets = 50;
	this->_attack_damage_sets = 20;

	std::cout << GREY << _name << CONSTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) : ClapTrap( )
{
	*this = copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

ScavTrap	&	ScavTrap::operator=( ScavTrap const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	_name = right_value._name;
	_hit_points = right_value._hit_points;
	_energy_points = right_value._energy_points;
	_attack_damage = right_value._attack_damage;

	return ( *this );
}

/*---- getters & setters -----------------------------------------------------*/

std::size_t	ScavTrap::hitPointsGet( void ) const
{
	return ( _hit_points_sets );
}

std::size_t	ScavTrap::energyPointsGet( void ) const
{
	return ( _energy_points_sets );
}

std::size_t	ScavTrap::attackDamageGet( void ) const
{
	return ( _attack_damage_sets );
}

/*---- functions -------------------------------------------------------------*/

void	ScavTrap::guardGate( void )
{
	if ( _hit_points <= 0 )
	{
		std::cout << _name << " already died... too late bro 🫶" << std::endl;
		return ;
	}
	std::cout << PURPLE << _name;
	std::cout << " is now in Gate keeper mode ! ";
	std::cout << END << std::endl;

	return ;
}

void	ScavTrap::attack( const std::string& target )
{
	if ( _hit_points <= 0 )
	{
		std::cout << _name << " already died... too late bro 🫶" << std::endl;
		return ;
	}
	if ( _energy_points > 0 )
	{
		_energy_points--;
		std::cout << _name << " attacks " << target << ", causing ";
		std::cout << _attack_damage;
		std::cout << " points of damage !" << std::endl;
	}
	else
		std::cout << _name << " has no more energy points !" << std::endl;

	return ;
}
