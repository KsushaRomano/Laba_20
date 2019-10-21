using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	char C;
	cout << "Введите символ: ";
	cin >> C;
	cout << "Предшедствующий символ: " << char(C - 1) << endl;
	cout << "Следующий символ: " << char(C + 1) << endl;
}