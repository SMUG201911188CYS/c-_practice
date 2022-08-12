#include <iostream>
#include <array>

int main()
{
	int a, b;
	int result = 0;

	std::cout << "숫자 두개 입력 : ";

	std::cin >> a >> b;


	for (; a <= b; a++) {
		result += a;
	}
	
	std::cout << result;

}