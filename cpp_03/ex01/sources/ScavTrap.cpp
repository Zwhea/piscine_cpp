/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:39:38 by twang             #+#    #+#             */
/*   Updated: 2023/11/03 17:06:37 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ScavTrap::ScavTrap( void )
{
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
	std::cout << _name << " is now in Gate keeper mode ! " << std::endl;
	std::cout << _attack_damage << std::endl;
	std::cout << _hit_points << std::endl;
	std::cout << _energy_points << std::endl;
}
