﻿#include <iostream>
#include <array>

const int ArSize = 100;

int main()
{
	std::array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1L;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;


}