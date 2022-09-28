#include "golf2.h"
#include <iostream>
#include <cstring>


int Golf::setGolf() {

	std::cout << "input fullname : ";
	std::cin.getline(Golf::fullname, 40);

	if (Golf::fullname[0] == '\0')
		return 0;

	std::cout << "input handicap : ";
	std::cin >> Golf::hc;
	std::cin.ignore();
	return 1;

}

void Golf::handicap(int hc) {

	Golf::hc = hc;

}

void Golf::showgolf() {

	std::cout << "Full name : " << Golf::fullname << std::endl;
	std::cout << "Handicap : " << Golf::handicap << std::endl;
}