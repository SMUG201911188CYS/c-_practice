#include "account.h"
#include <iostream>

Account::Account(std::string name, std::string account_num, double money){

	Account::name = name;
	Account::account_num = account_num;
	Account::money = money;

}

void Account::prt_account() {

	std::cout << "Name : " << Account::name << std::endl;
	std::cout << "Account_num : " << Account::account_num << std::endl;
	std::cout << "Money : " << Account::money << std::endl;

}

void Account::deposit(int money) {

	std::cout << "Deposit " << Account::money << "$" << std::endl;
	Account::money += money;

}

void Account::withdraw(int money) {

	std::cout << "Withdraw " << Account::money << "$" << std::endl;
	Account::money -= money;

}