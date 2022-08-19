#include <iostream>

int input(double arr[]);
void print(double arr[], int arr_size);
void average(double arr[], int arr_size);

int main()
{
	double score[10];
	double score_avreage;
	int arr_size = 0;

	arr_size = input(score);
	print(score, arr_size);
	average(score, arr_size);

}

int input(double arr[]) {

	int i = 0;
	std::cout << "골프 스코어 입력 (최대 10, 숫자 외 입력 시 종료) : ";

	for (; i < 10; i++) {
		if (!(std::cin >> arr[i])) {
			std::cout << std::endl << "입력 종료 ";
			break;
		}
	}
	return i;
}

void print(double arr[], int arr_size) {
	
	std::cout << "골프 스코어 출력 : ";

	for (int j = 0; j < arr_size; j++) {
		std::cout << arr[j] << " ";
	}

	std::cout << std::endl;

}

void average(double arr[], int arr_size) {

	std::cout << "평균 출력 : ";
	
	double average = 0;

	for (int k = 0; k < arr_size; k++) {
		average = arr[k];
	}

	std::cout << average / arr_size;

}