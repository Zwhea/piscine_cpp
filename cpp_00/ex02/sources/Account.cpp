/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:20 by twang             #+#    #+#             */
/*   Updated: 2023/09/22 13:53:47 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Account::Account( int initial_deposit )
{
	std::cout << "[19920104_091532] index:" << PURPLE << _accountIndex << END;
	std::cout << ";amount:" << PURPLE << initial_deposit << END;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	std::cout << "[19920104_091532] index:" << PURPLE << _accountIndex << END;
	std::cout << ";amount:" << PURPLE << _amount << END;
	std::cout << ";closed" << std::endl;
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
	if ("_totalNbDeposits" == 0 && "_totalNbWithdrawals" == 0)
	{
		std::cout << "[19920104_091532] accounts:" << PURPLE << "_nbAccounts" << END;
		std::cout << std::endl;
	}

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

/*---- static functions ------------------------------------------------------*/

static void		_displayTimestamp( void )
{
	std::cout << "display time stamp" << std::endl;
}
