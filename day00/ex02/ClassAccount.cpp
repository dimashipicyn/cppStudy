#include "ClassAccount.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account( int initial_deposit ) {
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_totalAmount += _amount;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit ) {
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits << "\n";
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if ((_amount - withdrawal) < 0) {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << "refused\n";
		return false;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return true;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp(); // print timestamp
	// print info
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";" << "\n";
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(NULL); // get time in sec
	std::tm *tm = std::localtime(&t); // convert time in struct tm
	// print timestamp
	std::cout << "[" << 1900 + tm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_sec;
	std::cout << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;