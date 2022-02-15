/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:41 by kwang             #+#    #+#             */
/*   Updated: 2022/02/15 18:58:42 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

#define BLUE "\033[94m"
#define RESET "\033[0m"

int	Account::_nbAccounts, Account::_totalAmount, Account::_totalNbDeposits, Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += _amount;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << " index:" << BLUE << this->_accountIndex << RESET
			  << ";amount:" << BLUE << this->_amount << RESET
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << BLUE << this->_accountIndex << RESET
			  << ";amount:" << BLUE << this->_amount << RESET
			  << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t		raw_time;
	struct tm	*timeinfo;
	char		buffer[18];

	std::time(&raw_time);
	timeinfo = std::localtime(&raw_time);
	std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit > 0)
	{
		this->_nbDeposits++;
		this->_amount += deposit;
		Account::_totalNbDeposits++;
		Account::_totalAmount += deposit;
	}
	Account::_displayTimestamp();
	std::cout << " index:" << BLUE << this->_accountIndex << RESET
			  << ";p_amount:" << BLUE << (deposit > 0 ? this->_amount - deposit : this->_amount)  << RESET
			  << ";deposit:" << BLUE << deposit << RESET
			  << ";amount:" << BLUE << this->_amount << RESET
			  << ";nb_deposits:" << BLUE << this->_nbDeposits << RESET
			  << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	status;

	status = withdrawal > 0 && withdrawal <= this->_amount;
	if (status)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
	}
	Account::_displayTimestamp();
	std::cout << " index:" << BLUE << this->_accountIndex << RESET
			  << ";p_amount:" << BLUE << (status ? this->_amount + withdrawal : this->_amount) << RESET;
	if (status)
	{
		std::cout << ";withdrawal:" << BLUE << withdrawal << RESET
				  << ";amount:" << BLUE << this->_amount << RESET
				  << ";nb_withdrawals:" << BLUE << this->_nbWithdrawals << RESET;
	}
	else
		std::cout << ";withdrawal:refused";
	std::cout << std::endl;
	return (status);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << BLUE << this->_accountIndex << RESET
			  << ";amount:" << BLUE << this->_amount << RESET
			  << ";deposits:" << BLUE << this->_nbDeposits << RESET
			  << ";withdrawals:" << BLUE << this->_nbWithdrawals << RESET
			  << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << BLUE << Account::_nbAccounts << RESET
			  << ";total:" << BLUE << Account::_totalAmount << RESET
			  << ";deposits:" << BLUE << Account::_totalNbDeposits << RESET
			  << ";withdrawals:" << BLUE << Account::_totalNbWithdrawals << RESET
			  << std::endl;
}
