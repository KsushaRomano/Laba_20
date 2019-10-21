using namespace std;

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	string S;
	int k, l, i;
	k = 0;
	cout << "Введите строку: ";
	getline(cin, S);
	l = S.size();
	for (i = 0; i < l; i++) {
		if (isupper(S[i])) {
		k++;
		};
	};
	cout << "В строке всего прописных латинскх букв: " << k;
}