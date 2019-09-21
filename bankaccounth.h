//CS 2024 -- A4
//Written by Oscar So (ons4) 
//September 21, 2019

#include <iostream>
using namespace std;

class BankAccount {
	public:
		BankAccount();
		BankAccount(int initialBalance);
		int getBalance();
		void setBalance(int newBalance);
		bool withdrawal(int amount);
		void deposit(int amount);
	private:
		int mBalance;
};
