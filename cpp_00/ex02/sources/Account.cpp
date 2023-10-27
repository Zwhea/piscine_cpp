/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:48:20 by twang             #+#    #+#             */
/*   Updated: 2023/10/27 14:49:31 by twang            ###   ########.fr       */
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
	_totalAmount += _amount;
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
	std::cout << "accounts:" << PURPLE << _nbAccounts << END;
	std::cout << ";total:" << PURPLE << _totalAmount << END;
	std::cout << ";deposits:" << PURPLE << _totalNbDeposits << END;
	std::cout << ";withdrawals:";
	std::cout << PURPLE << _totalNbWithdrawals << END << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << PURPLE << _accountIndex << END;
	std::cout << ";p_amount:" << PURPLE << _amount << END;
	std::cout << ";deposit:" << PURPLE << deposit << END;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << PURPLE << _amount << END;
	std::cout << ";nb_deposits:" << PURPLE << _nbDeposits << END << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << PURPLE << _accountIndex << END;
	std::cout << ";p_amount:" << PURPLE << _amount << END;
	std::cout << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << PURPLE << withdrawal << END;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";amount:" << PURPLE << _amount << END;
		std::cout << ";nb_withdrawals:" << PURPLE << _nbWithdrawals << END << std::endl;
	}
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
	std::cout << "index:" << PURPLE << _accountIndex << END;
	std::cout << ";amount:" << PURPLE << _amount << END;
	std::cout << ";deposits:" << PURPLE << _nbDeposits << END;
	std::cout << ";withdrawals:";
	std::cout << PURPLE << _nbWithdrawals << END << std::endl;
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
