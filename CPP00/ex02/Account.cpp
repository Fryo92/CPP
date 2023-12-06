/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiddane <abiddane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:56:27 by abiddane          #+#    #+#             */
/*   Updated: 2023/06/23 13:06:17 by abiddane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << checkAmount() << ";" << "created" << std::endl;
}

Account::~Account(void){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << checkAmount() << ";" << "closed" << std::endl;
}

int	Account::getNbAccounts( void ){

	return(_nbAccounts);
}

int	Account::getTotalAmount( void ){
	
	return(_totalAmount);
}

int	Account::getNbDeposits( void ){
	
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";" << std::flush;
	std::cout << "total:" << Account::getTotalAmount() << ";" << std::flush;
	std::cout << "deposits:" << Account::getNbDeposits() << ";" << std::flush;
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ){

	std::time_t currentTime = std::time(NULL);
    std::tm* localTime = std::localtime(&currentTime);

    char buffer[16];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
	
	std::cout << "[" << buffer << "] " << std::flush;
    
}

void	Account::makeDeposit( int deposit ){
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "p_amount:" << checkAmount() << ";" << std::flush;
	std::cout << "deposit:" << deposit << ";" << std::flush;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << "amount:" << checkAmount() << ";" << std::flush;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;	
}

bool	Account::makeWithdrawal( int withdrawal ){
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "p_amount:" << checkAmount() << ";" << std::flush;
	if (withdrawal > checkAmount()){
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";" << std::flush;	
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	std::cout << "amount:" << checkAmount() << ";" << std::flush;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const{
	return (this->_amount);
}

void	Account::displayStatus( void ) const{

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << checkAmount() << ";" << std::flush;
	std::cout << "deposits:" << this->_nbDeposits << ";" << std::flush;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
