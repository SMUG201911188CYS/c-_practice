#include <iostream>

int factorial(int temp);


int main()
{
	using std::cout;
	using std::cin;

	int num = 0;
	int result = 0;
	cout << "몇의 계승? : ";
	cin >> num;

	result = factorial(num);

	cout << num << "! = " << result;
}

int factorial(int temp) {
	if (temp == 0 || temp == 1)
		return 1;

	if (temp == 2)
		return temp;

	return temp * factorial(temp-1);
}