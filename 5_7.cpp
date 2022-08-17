#include <iostream>
#include <string>

struct Car {
	std::string by_made;
	int when_made;
};


int main()
{
	int input;
	std::cout << "how many car you have? ";
	std::cin >> input;

	Car* car = new Car[input];

	for (int i = 0; i < input; i++) {

		std::cout << "자동차 #" << i + 1 << " : " << std::endl;
		std::cout << "제작업체 : ";
		std::cin >> car[i].by_made;
		std::cout << "제작년도 : ";
		std::cin >> car[i].when_made;
	}

	std::cout << "당신이 보유하고 있는 자동차\n";

	for (int i = 0; i < input; i++) {

		std::cout << car[i].when_made << "형 " << car[i].by_made << std::endl;
	}

	delete[] car;

}