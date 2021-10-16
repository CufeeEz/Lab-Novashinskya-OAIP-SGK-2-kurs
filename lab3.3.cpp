#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b, x1, x2;
	cout << "x1 =: "; cin >> x1;
	cout << "x2 =: "; cin >> x2;
	a = 1;
	for (int i = x1; i < x2; i++)
	{
		if (b = i % 2 == 1)
		{
			a = a * i;
			cout << a << "\n";
		}
	}
	return(0);
}