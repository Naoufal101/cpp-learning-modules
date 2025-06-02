/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:22:25 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:22:26 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int 	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int 	Account::getTotalAmount(void) {
	return _totalAmount;
}

int 	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int 	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void 	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	_totalNbDeposits += ++_nbDeposits;
	std::cout	<< "index:" << _accountIndex 
				<< ";p_amount:" << checkAmount()
				<< ";deposit:" << deposit;
	_amount += deposit;
	std::cout 	<< ";amount:" << checkAmount() 
				<< ";nb_deposits:" << _nbDeposits 
	 << std::endl;
	_totalAmount +=deposit;
}

int		Account::checkAmount() const {
	return _amount;
}

bool	Account::makeWithdrawal(int withdrawal) {
	bool accepted;

	accepted = false;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";p_amount:" << checkAmount() 
				<< ";withdrawal:";
	if (checkAmount() >= withdrawal) {
		accepted = true;
		_totalNbWithdrawals += ++_nbWithdrawals;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << checkAmount() 
		<< ";nb_withdrawals:" << _nbWithdrawals;
	}
	else
		std::cout << "refused";
	std::cout << std::endl;
	return accepted;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << checkAmount()
				<< ";deposits:" << _nbDeposits 
				<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

Account::Account( int initial_deposit ) : _nbDeposits(0), _nbWithdrawals(0){
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << checkAmount() 
				<< ";created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << checkAmount() 
				<< ";closed" << std::endl;
}

Account::Account() {}

void	Account::_displayTimestamp( void ) {
	char buffer[20];

	std::time_t now =std::time(0);
	std::tm* localTime = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << buffer;
}
