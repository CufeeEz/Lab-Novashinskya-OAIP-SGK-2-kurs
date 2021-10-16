#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int y, x, n;
	y = 0;
	cout << "Введите число N: ";
	cin >> n;
	if (n <= 4)
	{
		cout << "Введено неверное значение!";
	}
	else
	{
		for (x = 1; x < n + 1; x++)
		{

			if (x % 5 == 0)
			{
				y = x + y;
			}
		}
		cout << y << endl;
	}
	return(0);
}