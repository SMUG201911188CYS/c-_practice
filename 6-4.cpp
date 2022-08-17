#include <iostream>
#include <iomanip>

#define strsize 20

typedef struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
} bop;


int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
 
	bop name[5]{ {"qdwqd", "vzxvcx", "zcdfsdc", 2}, {"apppl", "qmjh", "zmhjc", 1}, {"vfdvv", "qger", "zasfsdc", 1}, {"qeqe", "asfdf", "czx", 2}, {"aavv", "qq", "zczcc", 0},};

	char input = '@';

	cout << "Benevolent Order of Programmers" << endl;
	cout << "a. 실명 " << std::setw(25) << "b. 직함" << endl;
	cout << "c. BOP 아이디로 열람 " << std::setw(33) << "d. 회원이 지정한 것으로 알람" << endl;
	cout << "q. 종료 " << endl;
	cout << "원하는 것을 선택 : ";

	while (cin >> input) {

		if (input == 'a') {
			for (int i = 0; i < 5; i++)
				cout << name[i].fullname << endl;
		}
		else if (input == 'b') {
			for (int i = 0; i < 5; i++)
				cout << name[i].title << endl;
		}
		else if (input == 'c') {
			for (int i = 0; i < 5; i++)
				cout << name[i].bopname << endl;
		}
		else if (input == 'd') {
			for (int i = 0; i < 5; i++) {
				if(name[i].preference == 0)
					cout << name[i].fullname << endl;
				if (name[i].preference == 1)
					cout << name[i].title << endl;
				if (name[i].preference == 2)
					cout << name[i].bopname << endl;
			}
		}
		else if (input == 'q')
			break;

		cout << "원하는 것을 선택 : ";
	}

	cout << "프로그램 종료";

}