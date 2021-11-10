#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[5], c = 0, b;
    cout << "Введите пять целых чисел в массив: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] % 5 == 0)
        {
            c = a[i] + c;
        }
    }
    if (c == 0)
    {
        cout << "В массиве не найдено чисел кратных 5";
    }
    else
    {
        cout << "Сумма чисел кратных 5 = " << c << endl;
    }
    return 0;
}
