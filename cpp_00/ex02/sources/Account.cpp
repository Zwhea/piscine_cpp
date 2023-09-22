/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:20 by twang             #+#    #+#             */
/*   Updated: 2023/09/22 16:15:55 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*---- constructor & destructor ----------------------------------------------*/

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	
	_displayTimestamp();
	std::cout << "index:" << PURPLE << _accountIndex << END;
	std::cout << ";amount:" << PURPLE << _amount << END;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << PURPLE << _accountIndex << END;
	std::cout << ";amount:" << PURPLE << _amount << END;
	std::cout << ";closed" << std::endl;
}

/*---- static functions ------------------------------------------------------*/

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	
	if ("_totalNbDeposits" == 0 && "_totalNbWithdrawals" == 0)
	{
		std::cout << "accounts:" << PURPLE << "_nbAccounts" << END;
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
	_displayTimestamp();
	
	std::cout << "display status" << std::endl;
}

/*---- static functions ------------------------------------------------------*/

void	Account::_displayTimestamp( void )
{
	time_t		now;
	struct tm	tstruct;
	char		buffer[16];

	now = time(0);
	tstruct = *localtime(&now);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buffer << "] ";
}
