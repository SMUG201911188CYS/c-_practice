#include <iostream>
#include <new>
#include <cstring>

struct chaff {
	char dross[20];
	int slag;
};


char buffer[500];

int main()
{
	chaff* p1;
	int i;
	
	p1 = new (buffer) chaff[2];

	strcpy_s(p1[0].dross, "adsfs asdf");
	p1[0].slag = 55;
	strcpy_s(p1[1].dross, "qwe eqewq");
	p1[1].slag = 11;

	for (int i = 0; i < 2; i++)
		std::cout << p1[i].dross << " " << p1[i].slag << std::endl;


	std::cout << buffer << " " << &p1[1];
}
