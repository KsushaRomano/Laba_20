using namespace std;

#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char C;
	cout << "Введите символ: ";
	cin >> C;
	cout << "Предшедствующий символ: " << char(C - 1) << endl;
	cout << "Следующий символ: " << char(C + 1) << endl;
}
