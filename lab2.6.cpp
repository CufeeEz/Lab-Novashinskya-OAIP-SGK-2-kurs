#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float y, z, a;
	int x;
	cout << "Введите ваш стаж работы:"; cin >> x;
	cout << "Введите вашу заработную плату: ";  cin >> y;
	switch (x)
	{
	default:
		cout << "Вам не положена надбавка";
		break;
	case 5: case 6: case 7: case 8 : case 9:
		y = y + y * 10 / 100;
		cout << "Ваша заработная плата с учетом надбавки будет составлять: " << y;
		break;
	case 10: case 11: case 12: case 13: case 14:
		y = y + y * 15 / 100;
		cout << "Ваша заработная плата с учетом надбавки будет составлять: " << y;
		break;
	case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31:
		y = y + y * 20 / 100;
		cout << "Ваша заработная плата с учетом надбавки будет составлять: " << y;
		break;
	}
	return(0);
}

