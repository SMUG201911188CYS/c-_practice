#include <iostream>
#include <string>

int main()
{
	std::string month[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
	int month_sell[12];
	int result = 0;

	for (int i = 0; i < 12; i++) {
		std::cout << month[i] << " sell? : ";
		std::cin >> month_sell[i];
		result += month_sell[i];
	}

	std::cout << result;
}