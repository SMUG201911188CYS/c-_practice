#include <iostream>

const int Max = 5;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], double * end);
void revalue(double r, double ar[], double * end);

int main()
{
	using namespace std;
	double properties[Max];
	double * start = &properties[0];
	double * end = fill_array(properties, Max);
	show_array(properties, end);
	if (end - start > 0)
	{
		cout << "재평가율 입력: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "잘못 입력, 다시 입력: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "프로그램 종료.\n";
	cin.get();
	cin.get();
	return 0;
	
}

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << (i + 1) << "번 부동산 가격: ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량, 입력과정 종료\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return &ar[i];
}

void show_array(const double ar[], double* m)
{
	using namespace std;
	for (int i = 0; &ar[i] != m; i++)
	{
		cout << (i + 1) << "번 부동산 : ";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], double* m)
{
	for (int i = 0; &ar[i] != m; i++)
		ar[i] *= r;
}