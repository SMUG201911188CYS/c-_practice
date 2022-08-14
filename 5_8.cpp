#include <iostream>
#include <cstring>
#include <string>

int main()
{
	char word[100];
	int word_count = 0;
	std::cout << "영단어 입력 : " << std::endl;

	std::cin >> word;

	for (;std::strcmp(word, "done");) {
		word_count++;
		std::cout << word << std::endl;
		std::cin >> word;
	}

	std::cout << "총 " << word_count;
}