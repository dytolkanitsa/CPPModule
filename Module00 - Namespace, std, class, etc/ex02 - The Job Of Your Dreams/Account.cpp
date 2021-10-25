#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits;" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"<< deposit << ";amount:";
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	saveAmount;

	saveAmount = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount - withdrawal;
	if (checkAmount() == 1)
	{
		_amount = saveAmount;
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount 
			<< ";nb_withdrawal:" << _nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		_amount = saveAmount;
	}
	return 0;
}

int	Account::checkAmount() const
{
	if (_amount < 0)
		return 0;
	return 1;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t time = std::time(0);
	std::tm	*now;

	now = std::localtime(&time);
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon / 10
	<< now->tm_mon % 10 << now->tm_mday / 10
	<< now->tm_mday % 10 << "_" << now->tm_hour / 10 
	<< now->tm_hour % 10 << now->tm_min / 10
	<< now->tm_min % 10 << now->tm_sec / 10
	<< now->tm_sec % 10 << "] ";
}