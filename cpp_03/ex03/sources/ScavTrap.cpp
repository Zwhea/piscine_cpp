/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:39:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/04 20:07:20 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ScavTrap::ScavTrap( void )
{
	this->_name = "Undefined";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << RED << _name << " - ";
	std::cout << this->_hit_points << " ";
	std::cout << this->_energy_points << " ";
	std::cout << this->_attack_damage << END << std::endl;
	std::cout << GREY << D_CONSTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

ScavTrap::ScavTrap( std::string _name ) :
	ClapTrap::ClapTrap( _name )
{
	this->_name = _name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from ScavTrap." << END << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy )
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
