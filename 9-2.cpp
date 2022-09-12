﻿#include <iostream>
#include <string>

void strcount(std::string* str);

int main()
{
	using namespace std;
	std::string input;

	cout << "영문으로 한 행을 입력하십시오:\n";
	getline(cin, input);

	while (input.compare("\0") != 0)
	{
		strcount(&input);
		cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력):\n";
		getline(cin, input);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

void strcount(std::string * str)
{
	using namespace std;
	static int total = 0;			
	int count = 0;				

	cout << "\"" << *str << "\"에는 ";
	count = str->length();
	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}
