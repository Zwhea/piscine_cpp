/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:26:43 by twang             #+#    #+#             */
/*   Updated: 2023/11/03 21:29:04 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ClapTrap::ClapTrap( void ) : _name( "Undefined" ), _hit_points( 10 ), \
								_energy_points( 10 ), _attack_damage( 0 )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from ClapTrap." << END << std::endl;
}

ClapTrap::ClapTrap( std::string _name ) : _name( _name ), _hit_points( 10 ), \
								_energy_points( 10 ), _attack_damage( 0 )
{
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from ClapTrap." << END << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) : _name( copy._name ), _hit_points( 10 ), \
								_energy_points( 10 ), _attack_damage( 0 )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from ClapTrap." << END << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from ClapTrap." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

ClapTrap	&	ClapTrap::operator=( ClapTrap const & right_value )
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

void	ClapTrap::attack( const std::string& target )
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
/* to look at stats : 
	std::cout << RED << _name << " - ";
	std::cout << _hit_points << " ";
	std::cout << _energy_points << " ";
	std::cout << _attack_damage << END << std::endl;
*/
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( _hit_points <= 0 )
	{
		std::cout << _name << " already died... too late bro 🫶" << std::endl;
		return ;
	}
	std::cout << GREEN << _name << " is repairing himself with " << amount;
	std::cout << " hit points !" << END << std::endl;
	if ( _energy_points > 0 )
	{
		_energy_points--;
		_hit_points += amount;
		if ( _hit_points > 100 )
		{
			std::cout << "Max hit points set to 100 !" << std::endl;
			_hit_points = 100;
		}
		std::cout << _name << " has now " << _hit_points;
		std::cout << " hit points total !" << std::endl;
	}
	else
		std::cout << _name << " has no more energy points !" << std::endl;

	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if ( _hit_points <= 0)
	{
		std::cout << _name << " is already dead !" << std::endl;
		return ;
	}
	std::cout << RED << _name << " takes " << amount;
	std::cout << " of damage !" << END << std::endl;
	if (amount > _hit_points)
	{
		_hit_points = 0;
		std::cout << "Oh no !" << ITALIC << " \"Coup de grace\" ! ";
		std::cout << _name << " died !" << std::endl;
	}
	else 
	{
		_hit_points -= amount;
		if ( _hit_points <= 0 )
		{
			std::cout << "Oh no !" << ITALIC << " \"Coup de grace\" ! " << END;
			std::cout << _name << " died !" << std::endl;
			return ;
		}
		std::cout << _name << " has now " << _hit_points;
		std::cout << " hit points total !" << std::endl;
	}

	return ;
}
