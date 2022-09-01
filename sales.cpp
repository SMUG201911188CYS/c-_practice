#include "sales.h"
#include <iostream>

void SALES::setSales(SALES::Sales & s, const double ar[], int n) {

	int i = 0;
	double result = 0;
	double max = 0;
	double min = 0;

	if (SALES::QUARTERS > n) {
		for (; i < n; i++) {
			s.sales[i] = ar[i];
			result += ar[i];

			if (max < ar[i])
				max = ar[i];
			if (min > ar[i])
				min = ar[i];
		}
		s.average = result / n;
		s.max = max;
		s.min = min;
		
		for (; i < SALES::QUARTERS; i++)
			s.sales[i] = 0;
	}
	else {
		for (; i < SALES::QUARTERS; i++) {
			s.sales[i] = ar[i];
			result += ar[i];

			if (max < ar[i])
				max = ar[i];
			if (min > ar[i])
				min = ar[i];
		}
		s.average = result / n;
		s.max = max;
		s.min = min;
	}
}

void SALES::setSales(Sales & s) {
	double result = 0;
	double max = 0;
	double min = 0;

	for (int i = 0; i < QUARTERS; i++) {
		std::cout << i + 1 << "�б� �Ǹž� �ڷ� �Է� : ";
		std::cin >> s.sales[i];
		result = s.sales[i];

		if (max < s.sales[i])
			max = s.sales[i];
		if (min > s.sales[i])
			min = s.sales[i];
	}

	s.average = result / QUARTERS;
	s.max = max;
	s.min = min;
}

void SALES::showSales(const Sales & s) {

	for (int i = 0; i < QUARTERS; i++) {
		std::cout << i + 1 << "�б� �Ǹž� : " << s.sales[i]<< std::endl;
	}

	std::cout << std::endl;
	std::cout << "�Ǹž� �ִ밪 : " << s.max << std::endl;
	std::cout << "�Ǹž� �ּڰ� : " << s.min << std::endl;
	std::cout << "�Ǹž� ��հ� : " << s.average << std::endl;

}