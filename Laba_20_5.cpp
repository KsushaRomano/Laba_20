using namespace std;

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	string S, S0;
	int l, i, k;
	k = 0;
	cout << "Введите первую строку: ";
	getline(cin, S);
	cout << "Введите вторую строку: ";
	getline(cin, S0);
	while ((S.find(S0) >= 0) & (S.find(S0) < (S.size() + 1))) {
		S.erase(S.find(S0), S0.length());
		k++;
	};
	cout << "Количество вхождений: " << k;
}