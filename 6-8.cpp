#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	std::ifstream inFile;

	inFile.open("6_8.txt");
	
	if (!inFile.is_open()) {
		cout << "파일 열기 실패" << endl;
		exit(EXIT_FAILURE);
	}

	int cnt = 0;
	char arr[10];

	
	while (inFile.good()) {
		inFile >> arr;
		cnt++;
	}
	if (inFile.eof())
		cout << "파일 끝 도달" << endl;
	else if (inFile.fail())
		cout << "데이터 불일치 입력 종료" << endl;
	else
		cout << "알수 없는 이유" << endl;

	if (cnt == 0)
		cout << "데이터 없음" << endl;
	else
		cout << "문자 갯수 : " << cnt;

	inFile.close();
}