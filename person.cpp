#include "person.h"
#include <iostream>

Person::Person(const std::string& ln, const char* fn) {

	Person::lname = ln;
	strcpy_s(Person::fname, fn);

}

void Person::show() const {
	
	std::cout << Person::fname << " " << Person::lname;

}

void Person::FormalShow() const {

	std::cout << Person::lname << ", " << Person::fname;

}