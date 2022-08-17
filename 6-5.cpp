#include <iostream>

int main()
{
	double money = 0;
	double tax = 0;
	double tax_percent[4]{0, 0.10, 0.15, 0.20 };
	double tax_standard[4]{ 5000, 10000, 20000, 35000 };

	std::cin >> money;

	for (int i = 0; money > 0 && i < 4; i++) {

		if (money - tax_standard[i] < 0) {
			tax += (tax_percent[i] * money);
			money -= tax_standard[i];
		}
		else {
			tax += (tax_percent[i] * tax_standard[i]);
			money -= tax_standard[i];
		}
		
	}
	std::cout << tax;
}