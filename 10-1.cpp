#include <iostream>
#include "account.h"


int main()
{
	Account a1;
	Account a2("abraham", "110-222-3333", 6666.6);
	a1.prt_account();
	a2.prt_account();
	a1.deposit(5000);
	a1.withdraw(3000);
	a1.prt_account();

}
