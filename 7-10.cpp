#include <iostream>
using namespace std;


double add(double x, double y);
double min(double x, double y);
double calculate(double x, double y, double func(double x, double y));

int main() {

	double x = 0;
	double y = 0;
	int n = 0;
	double (*pf[2]) (double, double) = { add, min };

	cout << "원하는 계산 선택(0. plus, 1.minus, 숫자 외 입력시 종료) : ";

	while(cin >> n) {
		cout << "x와 y 값 입력 : ";
		cin >> x >> y;
		double q = pf[n](x, y);
		cout << "결과 값 : " << q << endl;
		cout << "원하는 계산 선택(0. plus, 1.minus, 숫자 외 입력시 종료) : ";
	}
}

double add(double x, double y) {
	return x + y;
}

double min(double x, double y) {
	return x - y;
}

double calculate(double x, double y, double func(double x, double y)) {
	return func(x, y);
}