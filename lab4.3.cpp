#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int x, y;
	x = 0; y = 0;
	do
	{
		x++;
		if (x % 2 == 1)
		{
			y = x + y;
		}
	} while (x < 100);
	cout << y << endl;
	return(0);
}