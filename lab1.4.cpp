#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian"); // Изменение языка программы
	int one; // Объявление переменной типом int
	cout << "Введите 1 для вывода стихотворения: "; // Вывод на экран
	cin >> one; // Присваивание переменной числом введенной с клавиатуры
	if (one == 1) // Объявление цикоа if, и проверка находится ли в переменной число 1
	{ 
		cout << "Сергей Есенин — Пороша" << endl // Вывод на экран стих 
			<< "Еду. Тихо. Слышны звоны." << endl
			<< "Под копытом на снегу." << endl
			<< "Только серые вороны" << endl
			<< "Расшумелись на лугу." << "\n" << endl
			<< "Заколдован невидимкой," << endl
			<< "Дремлет лес под сказку сна." << endl
			<< "Словно белою косынкой" << endl
			<< "Повязалася сосна." << "\n" << endl
			<< "Понагнулась, как старушка," << endl
			<< "Оперлася на клюку," << endl
			<< "А под самою макушкой" << endl
			<< "Долбит дятел на суку." << "\n" << endl
			<< "Скачет конь, простору много." << endl
			<< "Валит снег и стелет шаль." << endl
			<< "Бесконечная дорога" << endl
			<< "Убегает лентой вдаль." << endl; // Вывод на экран стих 
	}
	return(0);
}