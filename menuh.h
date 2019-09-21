//CS 2024 -- A4
//Written by Oscar So (ons4) 
//September 21, 2019

#include <iostream>
using namespace std;

enum MenuItemCode{cUnknownItem = 0, cBalanceInquiry, cSetBalance, cDeposit, cWithdrawal, cQuitItem};


class Menu{
	public:
		void showMenu();
		MenuItemCode promptUser();
};
