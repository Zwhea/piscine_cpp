/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:20 by twang             #+#    #+#             */
/*   Updated: 2023/09/19 13:17:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Account::Account( int initial_deposit )
{
	( void )initial_deposit;
	std::cout << "default account constructor called" << std::endl;
}

Account::~Account( void )
{
	std::cout << "default account destructor called" << std::endl;
}

/*---- static functions ------------------------------------------------------*/

int	Account::getNbAccounts( void )
{
	std::cout << "get nb accounts" << std::endl;
	return (0);
}

int	Account::getTotalAmount( void )
{
	std::cout << "get total amount" << std::endl;
	return (0);
}

int	Account::getNbDeposits( void )
{
	std::cout << "get nb deposit" << std::endl;
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "get nb withdrawal" << std::endl;
	return (0);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "display accounts infos" << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	Account::makeDeposit( int deposit )
{
	( void )deposit;
	std::cout << "make deposit" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	( void )withdrawal;
	std::cout << "make withdrawal" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	std::cout << "check amount" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "display status" << std::endl;
}
