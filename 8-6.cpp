#include <iostream>
using namespace std;
#include <cstring>

template <typename T> T maxn(T arr[], int n) {
	T max = 0;

	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

template <> char* maxn(char * arr[], int n) {
	char* max = arr[0];

	for (int i = 0; i < n; i++) {
		if (strlen(max) > strlen(arr[i]))
			max = arr[i];
	}
	return max;
}

int main() {
	int arr1[]{ 10, 30, 20, 15, 40, 55 };
	double arr[]{ 5.5, 1.4, 41.3, 4.5 };
	const char* arr2[5]{
		"가나다라맙사",
		"바바바마아아",
		"가날다라바바",
		"굽바앙리우이랑이",
		"기세버우오여정에니닝"
	};

	int arr1_max = maxn(arr1, 6);
	double arr_max = maxn(arr, 4);
	const char* arr2_max = maxn(arr2, 5);

	cout << arr1_max << " " << arr_max << " " << arr2_max << endl;
}