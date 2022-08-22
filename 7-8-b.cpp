#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char * Sname[4] = { "Spring", "Summer", "Fall", "Winter" };

struct Expenses {
	double arr[4];
};

void fill(Expenses * pa);
void show(Expenses da);

int main()
{
	Expenses expenses;
	fill(&expenses);
	show(expenses);
	return 0;

}

void fill(Expenses* pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << "에 소요되는 비용: ";
		cin >> pa->arr[i];
	}
}

void show(Expenses da)
{
	using namespace std;
	double total = 0.0;
	cout << "\n계절별 비용\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << da.arr[i] << endl;
		total += da.arr[i];
	}
	cout << "총 비용 : $" << total << endl;
}