#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {
	cout << "학급의 학생 수 입력 : ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	cout << "프로그램 종료.\n";

	delete[] ptr_stu;
	return 0;
}

int getinfo(student pa[], int n) {

	char temp[SLEN];
	int i = 0;

	for (; i < n; i++) {
		cout << i + 1 << " student name: ";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == NULL)
			break;

		cout << i + 1 << " student hobby: ";
		cin.getline(pa[i].hobby, SLEN);

		cout << i + 1 << " student ooplevel: ";
		cin >> pa[i].ooplevel;
		cin.ignore();
	}

	return i;
}

void display1(student st) {


	cout << "student name : " << st.fullname << endl;
	cout << "studenthobby : " << st.hobby << endl;
	cout << "student ooplevel : " << st.ooplevel << endl;
	cout << endl;

}

void display2(const student* ps) {

	cout << "student name : " << ps->fullname << endl;
	cout << "studenthobby : " << ps->hobby << endl;
	cout << "student ooplevel : " << ps->ooplevel << endl;
	cout << endl;

}

void display3(const student pa[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "student name : " << pa[i].fullname << endl;
		cout << "studenthobby : " << pa[i].hobby << endl;
		cout << "student ooplevel : " << pa[i].ooplevel << endl;
		cout << endl;
	}
}