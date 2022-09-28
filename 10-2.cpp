#include <iostream>
#include "person.h"


int main()
{

	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	std::cout << std::endl;
	one.FormalShow();
	std::cout << std::endl;
	two.show();
	std::cout << std::endl;
	two.FormalShow();
	std::cout << std::endl;
	three.show();
	std::cout << std::endl;
	three.FormalShow();
	std::cout << std::endl;

}
