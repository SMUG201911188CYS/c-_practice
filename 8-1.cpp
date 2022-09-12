#include <iostream>
#include <string>

struct CandyBar {
	char brand[20];
	double weight;
	int calorie;
};

void set_candybar(CandyBar& n, char* brand, double weight, int calorie);
void print_candybar(CandyBar & n);


int main() {
	
	char basic_brand[20] = "Millennium Munch";
	double basic_weight = 2.85;
	int basic_cal = 350;
	CandyBar n;

	set_candybar(n, basic_brand, basic_weight, basic_cal);
	print_candybar(n);

}

void set_candybar(CandyBar& n, char* brand, double weight, int calorie) {
	strcpy_s(n.brand, brand);
	n.weight = weight;
	n.calorie = calorie;
}

void print_candybar(CandyBar& n) {

	std::cout << "CandyBar brand : " << n.brand << std::endl;
	std::cout << "CandyBar weight : " << n.weight << std::endl;
	std::cout << "CandyBar calorie : " << n.calorie << std::endl;

}