#include <iostream>
#include <cctype>

int main()
{

	char word = 'a';

	while (word != '@') {

		std::cin >> word;

		if (islower(word))
			word = char(toupper(word));
		else
			word = char(tolower(word));

		std::cout << word << std::endl;

	}


}