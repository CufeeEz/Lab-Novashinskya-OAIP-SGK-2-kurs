#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float a, b, c, q, f, f1, f2;
	cout << "Введите 4 любых числа: " << "\n";
	cin >> b;
	cin >> a;
	cin >> c;
	cin >> q;
	f = max(a, b);
	f1 = max(c, q);
	f2 = max(f, f1);
	cout << "Набиольшее введенное число: " << f2;
	return(0);
}