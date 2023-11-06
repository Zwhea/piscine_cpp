/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:35:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/06 10:36:37 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

std::size_t	FragTrap::_hit_points_sets;
std::size_t	FragTrap::_energy_points_sets;
std::size_t	FragTrap::_attack_damage_sets;

/*---- constructors & destructor ---------------------------------------------*/

FragTrap::FragTrap( void )
{
	this->_name = "Undefined";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	this->_hit_points_sets = 100;
	this->_energy_points_sets = 100;
	this->_attack_damage_sets = 30;
	
	std::cout << GREY << D_CONSTRUCTOR << " ~ from FragTrap." << END << std::endl;
}

FragTrap::FragTrap( std::string _name ) :
	ClapTrap::ClapTrap( _name )
{
	this->_name = _name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	this->_hit_points_sets = 100;
	this->_energy_points_sets = 100;
	this->_attack_damage_sets = 30;

	std::cout << GREY << _name << CONSTRUCTOR << " ~ from FragTrap." << END << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy ) :  ClapTrap( )
{
	*this = copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from FragTrap." << END << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from FragTrap." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

FragTrap	&	FragTrap::operator=( FragTrap const & right_value )
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

std::size_t	FragTrap::hitPointsGet( void ) const
{
	return ( _hit_points_sets );
}

std::size_t	FragTrap::energyPointsGet( void ) const
{
	return ( _energy_points_sets );
}

std::size_t	FragTrap::attackDamageGet( void ) const
{
	return ( _attack_damage_sets );
}

/*---- functions -------------------------------------------------------------*/

void	FragTrap::highFivesGuys( void )
{
	if ( _hit_points <= 0 )
	{
		std::cout << _name << " already died... too late bro 🫶" << std::endl;
		return ;
	}
	std::cout << PURPLE << _name;
	std::cout << " says you look dashing today too !";
	std::cout << END << std::endl;

	return ;
}
