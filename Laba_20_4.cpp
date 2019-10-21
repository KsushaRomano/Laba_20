using namespace std;

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	string S;
	char C;
	int i, l;
	cout << "Введите строку: ";
	getline(cin, S);
	cout << "Введите символ: ";
	cin >> C;
	l = S.size();
	cout << "Измененная строка: ";
	for (i = l - 1; i >= 0; i--) {
		if (S[i] == C) {
			S.insert(i, 1, C);
		};
	};
	cout << S;
}
