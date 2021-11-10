#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[5], kol = 0;
    cout << "Введите 5 целых чисел" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k <5; k++)
        {
            if (a[i] == a[k])
            {
                kol+=1;
            }
        }
    }
    switch (kol)
    {
    case 5:
        cout << "Совпадений нет";
        break;
    case 7:
        cout << "Найдено 2 совпадения";
        break;
    case 11:
        cout << "Найдено 3 совпадения";
        break;
    case 17:
        cout << "Найдено 4 совпадения";
        break;
    case 25:
        cout << "Найдено 5 совпадений";
        break;
    }
    return 0;
}
 // 5 7 11 17 25
