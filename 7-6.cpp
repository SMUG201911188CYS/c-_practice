#include <iostream>
#include <array>

int fill_array(double* arr, int size);
void show_array(double* arr, int size);
void reverse_array(double* arr, int size, int mode);


int main()
{
	using std::cin;
	using std::cout;

	int size = 0;

	cout << "크기 입력 : ";
	cin >> size;

	double* double_arr = new double[size];

	size = fill_array(double_arr, size);
	show_array(double_arr, size);
	reverse_array(double_arr, size, 0);
	show_array(double_arr, size);
	reverse_array(double_arr, size, 1);
	show_array(double_arr, size);

	delete[] double_arr;
}

int fill_array(double* arr, int size) {

	using std::cout;
	using std::cin;
	using std::endl;

	double temp = 0;
	int i = 0;

	cout << "함수에 값 입력 : ";

	for (;( i < size && cin >> temp); i++) {
		arr[i] = temp;
	}

	cout << "배열의 크기 : " << i << endl;

	return i;
}

void show_array(double* arr, int size) {

	using std::cout;
	using std::endl;

	cout << "배열 출력" << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void reverse_array(double* arr, int size, int mode) {
	using std::cout;
	using std::endl;

	double temp = 0;
	int i = 0;
	int j = size;

	if (mode == 0) {
		for (; i < size / 2; i++) {
			temp = arr[i];
			arr[i] = arr[--j];
			arr[j] = temp;
		}
	}
	else {
		for (i = 1, j -= 1; i < size / 2; i++) {
			temp = arr[i];
			arr[i] = arr[--j];
			arr[j] = temp;
		}
	}

}



