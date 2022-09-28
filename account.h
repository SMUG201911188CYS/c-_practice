#include <string>

class Account {
	private :
		std::string name;
		std::string account_num;
		double money;
	public:
		Account(std::string name = "not", std::string account_num = "no ont", double money = 0.0);
		void prt_account();
		void deposit(int money);
		void withdraw(int money);
};