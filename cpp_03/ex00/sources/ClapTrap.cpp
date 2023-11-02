/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:26:43 by twang             #+#    #+#             */
/*   Updated: 2023/11/02 17:46:26 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ClapTrap::ClapTrap( void ) : _name( NULL ), _hit_points( 0 ), \
								_energy_points( 0 ), _attack_damage( 0 )
{
	
}

ClapTrap::ClapTrap( std::string _name ) : _name( _name ), _hit_points( 10 ), \
								_energy_points( 10 ), _attack_damage( 0 )
{
	
}

ClapTrap::ClapTrap( ClapTrap const & copy ) : _name( copy._name ), _hit_points( 10 ), \
								_energy_points( 10 ), _attack_damage( 0 )
{
	
}

ClapTrap::~ClapTrap( void )
{
	
}

/*---- affectation operator overloading --------------------------------------*/

ClapTrap	&	ClapTrap::operator=( ClapTrap const & right_value )
{
	if ( this != &right_value )
		this = right_value;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

void	attack( const std::string& target )
{
	std::cout << this->_name << " attacks " << target << " , causing ";
	std::cout << "points of damage !" << std::endl;
}

void	takeDamage( unsigned int amount )
{
	(void)amount;
}

void	beRepaired( unsigned int amount )
{
	(void)amount;
}
