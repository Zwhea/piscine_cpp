/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:22:33 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 16:11:53 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Harl::Harl( void )
{
	std::cout << GREY;
	std::cout << "default constructor called ";
	std::cout << END << std::endl;
}

Harl::~Harl( void )
{
	std::cout << GREY;
	std::cout << "default destructor called";
	std::cout << END << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	Harl::debug( void )
{
	std::cout << BLUE << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << END << std::endl;
}

void	Harl::info( void )
{
	std::cout << PURPLE << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!" << END << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here";
	std::cout << " since last month." << END << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << END << std::endl;
}

void	Harl::complain( std::string level )
{
	const t_errors	options[] = {{"DEBUG", &Harl::debug}, \
									{"INFO", &Harl::info}, \
									{"WARNING", &Harl::warning}, \
									{"ERROR", &Harl::error}};

	for ( int i = 0; i < 4; i++ )
	{
		if ( level == options[i].complain_key )
			( this->*options[i].function )( );
	}
}
