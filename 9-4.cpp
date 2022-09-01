#include "sales.h"
#include <iostream>

int main()
{
	SALES::Sales n1;
	SALES::Sales n2;

	double ar[3]{ 1000, 2000.4, 4000.3 };

	SALES::setSales(n1);
	SALES::setSales(n2, ar, 3);

	SALES::showSales(n1);
	SALES::showSales(n2);

}
