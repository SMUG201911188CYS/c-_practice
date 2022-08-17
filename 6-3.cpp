#include <iostream>

int main()
{
	char input = '@';


	while (1) {
		std::cout << "단어 입력(c, p, t, g, q) : ";
		std::cin >> input;

		if (input == 'q')
			return 0;

		if (input == 'c' || input == 'p' || input == 't' || input == 'g')
			break;
	}

	switch (input)
	{
	case 'c':
		std::cout << "ccc";
		break;
	case 'p':
		std::cout << "ppp";
		break;
	case 't':
		std::cout << "ttt";
		break;
	case 'g':
		std::cout << "ggg";
		break;
	default:
		break;
	}

}