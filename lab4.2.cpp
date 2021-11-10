#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int y = 0, summ = 0, n;
	cout << "Введите число N: ";
	cin >> n;
	if (n <= 1)
	{
		cout << "Введено неверное значение!";
	}
	do
	{
		y++;
		if (y % 5 == 0)
		{
			summ += y;
		}
	} while (summ < n);
	cout << summ;
	return(0);
}
