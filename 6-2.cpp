#include <iostream>
#include <cctype>
#include <typeinfo>

int main()
{
	double donation[10];
	double donation_total = 0;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		std::cin >> donation[i];
		donation_total += donation[i];
	}

	donation_total /= 10;

	for (int j = 0; j < 10; j++) {
		if (donation[j] > donation_total)
			cnt++;
	}

	std::cout << donation_total << " " << cnt;

}