/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:18:57 by twang             #+#    #+#             */
/*   Updated: 2023/10/26 16:54:12 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Harl::Harl( void )
{
	/*std::cout << GREY;
	std::cout << "default constructor called\n";
	std::cout << END << std::endl;*/
}

Harl::~Harl( void )
{
	/*std::cout << GREY;
	std::cout << "default destructor called";
	std::cout << END << std::endl;*/
}

/*---- functions -------------------------------------------------------------*/

void	Harl::debug( void )
{
	std::cout << BLUE << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!\n" << END << std::endl;
}

void	Harl::info( void )
{
	std::cout << PURPLE << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!\n" << END << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here";
	std::cout << " since last month.\n" << END << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now.\n" << END << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	for ( i = 0; i < 4; i++ )
	{
		if (level == complains[i])
			break ;
	}
	if ( i == 4 )
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	switch ( i )
	{
		case 0 :
			debug();
		case 1 :
			info();
		case 2 :
			warning();
		case 3 :
			error();
			break ;
	}
}