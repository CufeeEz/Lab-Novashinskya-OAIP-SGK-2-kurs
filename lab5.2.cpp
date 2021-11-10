#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[10];
    cout << "Введите десять целых чисел в массив: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << a[i] << " ^2 = " << a[i]*2 << endl;
        }
    }
    return 0;
}
