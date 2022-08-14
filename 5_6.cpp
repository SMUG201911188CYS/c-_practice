#include <iostream>
#include <string>

int main()
{
	std::string month[12] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
	int month_sell[3][12];
	int result[4] = { 0,0,0, 0 };


	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 12; i++) {
			std::cout << j + 1 << "year " << month[i] << " sell? : ";
			std::cin >> month_sell[j][i];
			result[j] += month_sell[j][i];
		}
	}

	for (int k = 0; k < 3; k++) {

		std::cout << k << " year sell = " << result[k] << std::endl;
		result[3] += result[k];
	}

	std::cout << "all year sell = " << result[3] << std::endl;
}