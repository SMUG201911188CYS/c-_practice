#include <iostream>
#include "golf2.h"

int main()
{

	Golf a;
	Golf b;

	int isReturn = b.setGolf();
	
	a.showgolf();
	b.showgolf();

	a.setHandicap(10);

	a.showgolf();

}
