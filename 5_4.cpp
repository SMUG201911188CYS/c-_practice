#include <iostream>


int main()
{
	long double money = 100000;
	long double a = 100000;
	long double b = 100000;
	int year = 0;

	for (; a >= b;) {
		a += money * 0.10;
		b += b * 0.05;
		year++;
	}
	std::cout << a << " " << b << " " << year;

}