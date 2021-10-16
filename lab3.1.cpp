#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "Russian");
	int a;
	a = 0;
	for (int i = 1; i < 16; i++)
	{
		a = a + i;
		cout << a << endl;
	}
	return(0);
}