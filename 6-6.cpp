#include <iostream>
#include <string>

typedef struct contributor {
	std::string name;
	double donation;
} contributor;


int main()
{
	int number_of_contributor = 0;
	int high_contributor_cnt = 0;
	int contributor_cnt = 0;
	std::cout << "기부자 수 입력 : ";
	std::cin >> number_of_contributor;

	int * high_contributor_arr = new int[number_of_contributor];
	int * contributor_arr = new int[number_of_contributor];
	contributor * arr = new contributor[number_of_contributor];

	for (int i = 0; i < number_of_contributor; i++) {
		
		std::cout << i + 1 << "번째 기부자 이름 : ";
		std::cin >> arr[i].name;
        std::cout << i + 1 << "번째 기부자 금액 : ";
		std::cin >> arr[i].donation;

		if (arr[i].donation >= 10000)
			high_contributor_arr[high_contributor_cnt++] = i;
		else if(arr[i].donation >= 0)
			contributor_arr[contributor_cnt++] = i;
	}

	if (high_contributor_cnt == 0 && contributor_cnt == 0)
		std::cout << "기부자 없음";
	
	if (high_contributor_cnt >= 0) {
		std::cout << "고액기부자" << std::endl;
		for (int j = 0; j < high_contributor_cnt; j++) {
			std::cout << "이름 : " << arr[high_contributor_arr[j]].name << " 기부금 : " << arr[high_contributor_arr[j]].donation << std::endl;
		}
	}
	if (contributor_cnt >= 0) {
		std::cout << "소액기부자" << std::endl;
		for (int j = 0; j < contributor_cnt; j++) {
			std::cout << "이름 : " << arr[contributor_arr[j]].name << " 기부금 : " << arr[contributor_arr[j]].donation << std::endl;
		}

	}
	delete[] high_contributor_arr;
	delete[] contributor_arr;
	delete[] arr;
}