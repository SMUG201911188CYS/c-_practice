#include <iostream>
#include <string>

void string_upper(std::string & n);

int main() {

	std::string temp;
	std::string quit = "q";
	std::cout << "문자열 입력 : ";
	std::getline(std::cin, temp);

	while (temp.compare(quit) != 0) {
		string_upper(temp);
		
		std::cout << temp << std::endl;
		std::cout << "문자열 입력 (종료 q) : ";
		std::getline(std::cin, temp);
	}

	std::cout << "끝";
}

void string_upper(std::string& n) {
	for (int i = 0; i < n.size(); i++)
		n[i]= toupper(n[i]);
}
