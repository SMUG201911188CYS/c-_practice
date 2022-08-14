#include <iostream>


int main()
{
	int line;
	std::cout << "행 수 : ";
	std::cin >> line;


	for (int i = line-1; i >= 0; i--) {

		for (int j = 0; j < line; j++) {
			
			if (j >= i)
				std::cout << "*";
			else
				std::cout << "`";

		}

		std::cout << std::endl;
	}


}