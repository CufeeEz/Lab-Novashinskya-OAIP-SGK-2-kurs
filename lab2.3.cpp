#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float x , y;
	cout << "Введите число x: ";
	cin >> x;
	if (x > 3)
	{
		y = (x * x) + 5;
	}
	else
	{
		y = x - 8;
	}
	cout << "Результат: " << y;
	return(0);
}