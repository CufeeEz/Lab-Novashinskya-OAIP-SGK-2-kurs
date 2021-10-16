#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float a, b, c;
	cout << "Введите сторону a: "; cin >> a;
	cout << "Введите сторону b: "; cin >> b;
	cout << "Введите сторону c: "; cin >> c;
	if (a + b > c and b + c > a and a + c > b)
	{
		if (a + b == b + c and b + c == a + c)
		{
			cout << "Треугольник равносторонний";
		}
		else if (a * a + b * b == c * c)
		{
			cout << "Треугольник прямоугольный";
		}
		else if (a == c or b == c or a == b)
		{
			cout << "Треугольник равнобедренный";
		}
	}
	else
	{
		cout << "Треугольник невозможно создать";
	}
	return(0);
}