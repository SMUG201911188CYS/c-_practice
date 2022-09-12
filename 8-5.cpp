#include <iostream>

template<typename T> void max5(T* arr);

int main() {
	int arr1[5]{ 10, 30, 20, 15, 40 };
	double arr[5]{ 5.5, 1.4, 41.3, 4.5, 55.1 };

	max5(arr1);
	max5(arr);

}


template<typename T> void max5(T* arr) {
	T max = 0;

	for (int i = 0; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	std::cout << max << std::endl;
}