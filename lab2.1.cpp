#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;
int main() {
	setlocale(0, "Russian");
	int a, b, c, f;
	cout << "Введите 3 любых числа: ";
	cin >> a, b, c;
	f = max(a, b, c);
	cout << "Набиольшее введенное число: " << f;
	return(0);
}