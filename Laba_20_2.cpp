using namespace std;

#include <string>
#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int l, i;
	string S;
	cout << "Введите строку: ";
	getline(cin, S);
	l = S.size();
	cout << "Измененная строка: ";
	for (i = 0; i < l; i++) {
		if (S[i] == ' ')
			S.erase(i, 1);
		cout << S[i] << " ";
	};
}
