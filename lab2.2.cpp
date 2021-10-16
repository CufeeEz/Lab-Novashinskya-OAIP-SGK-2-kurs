#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	int a;
	cout << "Введите число: ";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "Введенное число является четным";
	}
	else
	{
		cout << "Введенное число не является четным";
	}
	return(0);
}