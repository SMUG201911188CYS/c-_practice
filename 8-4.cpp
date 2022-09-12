#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
	char* str;
	int ct;
};

void set(stringy& n, char str[50]);
inline void show(stringy n, int num = 1) { for (int i = 0; i < num; i++) { cout << n.str << endl; } }
inline void show(const char n[], int num = 1) { for (int i = 0; i < num; i++) { cout << n << endl; } };

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy& n, char str[50]) {
	char temp[50];
	n.str = temp;
	strcpy_s(temp, str);
	n.ct = strlen(temp);
}