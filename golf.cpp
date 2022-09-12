#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf& g, const char* name, int hc) {
	
	strcpy_s(g.fullname, name);
	g.handicap = hc;

}

int setgolf(golf& g) {
	
	std::cout << "input fullname : ";
	std::cin.getline(g.fullname, 40);

	if (g.fullname[0] == '\0')
		return 0;

	std::cout << "input handicap : ";
	std::cin >> g.handicap;
	std::cin.ignore();
	return 1;

}

void handicap(golf& g, int hc) {

	g.handicap = hc;

}

void showgolf(const golf& g) {

	std::cout << "Full name : " << g.fullname << std::endl;
	std::cout << "Handicap : " << g.handicap << std::endl;
}