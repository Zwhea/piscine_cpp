/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:35:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/03 23:12:17 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrapTrap.hpp"
#include "ClapTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

FrapTrap::FrapTrap( void )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from FrapTrap." << END << std::endl;
}

FrapTrap::FrapTrap( std::string _name ) :
	ClapTrap::ClapTrap( _name )
{
	this->_name = _name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << GREY << _name << CONSTRUCTOR << " ~ from FrapTrap." << END << std::endl;
}

FrapTrap::FrapTrap( FrapTrap const & copy )
{
	*this = copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from FrapTrap." << END << std::endl;
}

FrapTrap::~FrapTrap( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from FrapTrap." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

FrapTrap	&	FrapTrap::operator=( FrapTrap const & right_value )
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

void	FrapTrap::highFivesGuys( void )
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

std::size_t	FrapTrap::getHitPoints( void )
{
	return ( _hit_points );
}

std::size_t	FrapTrap::getAttackDamage( void )
{
	return ( _attack_damage );
}
