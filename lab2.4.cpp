#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float a, b, x, c, d;
	cout << "Введите a, b, c: ";
	cin >> a; cin >> b; cin >> c;
	if (a != 0)
	{
		d = b * b - 4 * a * c;
		if (d > 0)
		{
			cout << "Ответ: " << d << "\n";
			cout << "Два действительных корня";
		}
		if (d == 0)
		{
			cout << "Ответ: " << d << "\n";
			cout << "Два действительных равных корня";
		}
		if (d < 0)
		{
			cout << "Ответ: " << d << "\n";
			cout << "Нет действительных корней";
		}
	}
	else
	{
		cout << "a равно нулю";
	}
	return(0);
}
