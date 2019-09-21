//CS 2024 -- A4
//Written by Oscar So (ons4) 
//September 21, 2019

#include <iostream>
#include "bankaccounth.h"
using namespace std;

BankAccount::BankAccount(){
	this->mBalance = 0;
}
		
BankAccount::BankAccount(int initialBalance){
	this->mBalance = initialBalance;
}

int BankAccount::getBalance(){
	return this->mBalance;
}

void BankAccount::setBalance(int newBalance){
	this->mBalance = newBalance;
}

bool BankAccount::withdrawal(int amount){
	if (amount > 0 && this->mBalance >= amount){
		return true;
	}else{
		return false;
	}
}

void BankAccount::deposit(int amount){
	this->mBalance += amount;
}
