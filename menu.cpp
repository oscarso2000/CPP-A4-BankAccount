//CS 2024 -- A4
//Written by Oscar So (ons4) 
//September 21, 2019


#include <iostream>
#include "menuh.h"
using namespace std;

void Menu::showMenu(){
	cout << "---- MENU ----" << endl;
	cout << "(" << MenuItemCode::cBalanceInquiry << ") Balance Inquiry" << endl;
	cout << "(" << MenuItemCode::cSetBalance << ") Set Balance" << endl;
	cout << "(" << MenuItemCode::cDeposit << ") Deposit" << endl;
	cout << "(" << MenuItemCode::cWithdrawal << ") Withdrawal" << endl;		
	cout << "(" << MenuItemCode::cQuitItem << ") Quit" << endl;			
}

MenuItemCode Menu::promptUser(){
	cout << "Enter Choice> ";
	int choice;
	cin >> choice;
	return (MenuItemCode) choice;
}

