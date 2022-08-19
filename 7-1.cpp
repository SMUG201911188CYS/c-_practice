#include <iostream>

double cal(double x, double y);


int main()
{
	double x = 1;
	double y = 1;

	while (x != 0 || y != 0) {

		std::cout << "x 와 y 값 입력 : ";
		std::cin >> x >> y;
		
		std::cout << x << "와 " << y << "의 조화평균 : " << cal(x, y) << std::endl;
	}
}

double cal(double x, double y) {
	return 2.0 * x * y / (x + y) ;
}