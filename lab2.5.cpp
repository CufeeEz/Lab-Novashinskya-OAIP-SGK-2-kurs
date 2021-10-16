#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float x, y, cost;
	cout << "Введите длительность разговора: ";
	cin >> x;
	cout << "Введите день недели(1 - понедельник, 2 - вторник и т.д.: ) ";
	cin >> y;
	if (y == 7 or y == 6)
	{
		cost = x * 25;
		cost = cost - cost / 100 * 20;
		cout << "Стоимость разговора: " << cost;
	}
	else
	{
		cost = x * 25;
		cout << "Стоимость разговора: " << cost;
	}
	return(0);
}