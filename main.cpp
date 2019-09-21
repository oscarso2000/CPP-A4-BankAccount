//CS 2024 -- A4
//Written by Oscar So (ons4) 
//September 21, 2019


#include <iostream>
#include "menuh.h"
#include "bankaccounth.h"
using namespace std;

void setBalance(BankAccount &bank){
	cout << "\nSetting balance" << endl;
	cout << "ENTER NEW BALANCE> ";
	int add;
	cin >> add;
	bank.setBalance(add);
}

void withdrawal(BankAccount &bank){
	cout<< "\nWithdrawal" <<endl;
	cout << "HOW MUCH DO YOU WANT TO WITHDRAWAL> ";
	int take;
	cin >> take;
	if (bank.withdrawal(take) == true){
		bank.deposit((-1)*(take));
		cout << "Withdrawal successful" << endl;
	}else{
		cout << "Withdrawal failed" << endl;
	}
}

void deposit(BankAccount &bank){
	cout << "\nDeposit" << endl;
	cout << "HOW MUCH DO YOU WANT TO DEPOSIT> ";
	int dep; 
	cin >> dep;
	bank.deposit(dep);
}

int main(int argc, char *argv[]){
	Menu menu;
	BankAccount bank;
	bool cont = true;
	while (cont  == true){
		menu.showMenu();
		bool check = false;		
		switch(menu.promptUser()){
			case cBalanceInquiry:
				cout << "BALANCE: " << bank.getBalance() << endl;
				check = true;
				break;
			case cSetBalance:
				setBalance(bank);
				check = true;
				break;
			case cDeposit:
				deposit(bank);
				check = true;
				break;
			case cWithdrawal:
				withdrawal(bank);
				check = true;
				break;
			case cQuitItem:
				cout << "Quitting!" << endl;
				check = true;
				cont = false;
				break;
		}
		if (check == false){
			cout << "ERROR, unknown item selected" << endl;
		}			
	}
}
