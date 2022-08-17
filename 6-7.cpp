#include <iostream>
#include <cctype>


int main()
{
	char word;
	int consonant_cnt = 0;
	int vowel_cnt = 0;
	int else_cnt = 0;
	using std::cout;
	using std::cin;
	using std::endl;


	cout << "단어들 입력 (end = q)" << endl;

	while (cin) {
		word = cin.get();
		if (!isalpha(word)) {
			while (cin.get() != ' ')
				continue;
			else_cnt++;
		}
		else if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u') {
			while (cin.get() != ' ')
				continue;
			vowel_cnt++;
		}
		else if (word == 'q')
		{
			word = cin.get();
			if (word == '\n')
				break;
			else if (word == ' ')
				consonant_cnt++;
			else {
				while (cin.get() != ' ')
					continue;
				consonant_cnt++;
			}
		}
		else
		{
			while (cin.get() != ' ')
				continue;
			consonant_cnt++;
		}
	}

	cout << "모음 : " << vowel_cnt << endl;
	cout << "자음 : " << consonant_cnt << endl;
	cout << "그외 : " << else_cnt << endl;
}