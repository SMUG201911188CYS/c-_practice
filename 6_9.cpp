#include <iostream>
#include <string>
#include <fstream>

typedef struct contributor {
	std::string name;
	double donation;
} contributor;


int main()
{

	std::fstream file;
	file.open("6-9.txt");
	if (!file.is_open()) {
		std::cout << "파일 안열림";
		exit(EXIT_FAILURE);
	}

	int number_of_contributor = 0;
	int high_contributor_cnt = 0;
	int contributor_cnt = 0;
	int i = 0;

	file >> number_of_contributor;

	int* high_contributor_arr = new int[number_of_contributor];
	int* contributor_arr = new int[number_of_contributor];
	contributor* arr = new contributor[number_of_contributor];

	while (file.good()) {
		file.ignore();
		std::getline(file, arr[i].name);
		file >> arr[i].donation;

		if (arr[i].donation >= 10000)
			high_contributor_arr[high_contributor_cnt++] = i;
		else if (arr[i].donation >= 0)
			contributor_arr[contributor_cnt++] = i;
		i++;
	}

	if (high_contributor_cnt == 0 && contributor_cnt == 0)
		std::cout << "기부자 없음";

	if (high_contributor_cnt > 0) {
		std::cout << "고액기부자" << std::endl;
		for (int j = 0; j < high_contributor_cnt; j++) {
			std::cout << "이름 : " << arr[high_contributor_arr[j]].name << " 기부금 : " << arr[high_contributor_arr[j]].donation << std::endl;
		}
	}
	if (contributor_cnt > 0) {
		std::cout << "소액기부자" << std::endl;
		for (int j = 0; j < contributor_cnt; j++) {
			std::cout << "이름 : " << arr[contributor_arr[j]].name << " 기부금 : " << arr[contributor_arr[j]].donation << std::endl;
		}

	}
	delete[] high_contributor_arr;
	delete[] contributor_arr;
	delete[] arr;

	file.close();
}