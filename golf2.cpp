#include "golf2.h"
#include <iostream>
#include <cstring>



Golf::Golf() {

	strcpy_s(Golf::fullname, "None");
	Golf::hc = 0;

}
int Golf::setGolf() {

	Golf a;

	std::cout << "input fullname : ";
	std::cin.getline(a.fullname, 40);

	if (a.fullname[0] == '\0')
		return 0;

	std::cout << "input handicap : ";
	std::cin >> a.hc;
	std::cin.ignore();

	*this = a;


	return 1;

}

void Golf::setHandicap(int hc) {

	Golf::hc = hc;

}

void Golf::showgolf() {

	std::cout << "Full name : " << Golf::fullname << std::endl;
	std::cout << "Handicap : " << Golf::hc << std::endl;
}