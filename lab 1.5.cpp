#include <iostream> //  Подключаем библиотеку
#include <iomanip> //  Подключаем библиотеку
using namespace std;
int main() {
	setlocale(0, "Russian"); // Изменение языка программы
	cout << setw(16) << setiosflags(ios::left) << "Фамилия" << setw(16) << "Имя" << setw(16) << "Адрес" << setw(16) << "Город" << endl
		<< "-----------------------------------------------------------------" << endl
		<< setw(16) << setiosflags(ios::left) << "Петров" << setw(16) << "Василий" << setw(16) << "Кленовая 16" << setw(16) << "Санкт-Петербург" << endl
		<< setw(16) << setiosflags(ios::left) << "Иванов" << setw(16) << "Сергей" << setw(16) << "Осиновая 3" << setw(16) << "Находка" << endl
		<< setw(16) << setiosflags(ios::left) << "Сидоров" << setw(16) << "Иван" << setw(16) << "Березовая 21" << setw(16) << "Калининград" << endl;
	return(0);
}