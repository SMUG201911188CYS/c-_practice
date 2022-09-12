#include <iostream>
#include "golf.h"

int main(void)
{

	using std::cin;
	using std::cout;
	using std::endl;

	int i = 0;
	int check = 0;
	char name[40];
	int handi;

	golf g[5];

	for (; i < 5; i++) {

		if ((i & 2) == 0) {
			cout << i+1 << " roop" << endl;
			cout << "input Fullname : ";
			cin.getline(name, 40);
			if (name[0] == '\0')
				break;
			
			cout << "input Handicap : ";
			cin >> handi;

			cin.ignore();
			setgolf(g[i], name, handi);
			
		}
		else {
			cout << i + 1 << " roop" << endl;
			check = setgolf(g[i]);
			if (check == 0)
				break;
		}

	}

	handicap(g[0], 10);

	for (int j = 0; j < i; j++) {
		cout << j + 1 << endl;
		showgolf(g[j]);
		cout << endl;
	}
}
