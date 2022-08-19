#include <iostream>

long double probability(unsigned number, unsigned picks);


int main()
{
	using namespace std;
	double total, choices;
	long double result1 = 0;
	long double result2 = 0;

	cout << "첫번째 전체 수의 개수와 뽑을 수의 개수를 입력:\n";

	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "첫번째 이길 확률은 ";
		result1 = probability(total, choices);
		cout << result1 << "번 중에서 한 번입니다.\n";
		cout << "두번째 두 수를 입력하시오.";

		while ((cin >> total >> choices) && choices <= total)
		{
			cout << "두번째 이길 확률은 ";
			result2 = probability(total, choices);
			cout << result2 << "번 중에서 한 번입니다.\n";
			break;
		}

		cout << "두번 모두 맞출 확률 : " << result1 * result2 << endl;
		cout << "그만 할거면 q 입력 or 다시 두수 입력";
	}

	cout << "프로그램 종료";

}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
