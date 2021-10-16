#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[100], c = 0, b;
    cout << "Введите число: ";
    cin >> b;
    b += 1;
    if (b > 0 and b < 100)
    {
        for (int i = 0; i < b; i++)
        {
            a[i] = i;
            if (a[i] % 2 == 0)
            {
                cout << a[i] << "*" << 2 << "=" << a[i] * 2 << endl;
            }
        }
        for (int i = 0; i < b; i++)
        {
            if (a[i] % 2 == 1)
            {
                cout << a[i] << "*" << 3 << "=" << a[i] * 3 << endl;
            }
        }
    }
    else
    {
        cout << "Некорректный запрос.";
    }
    return 0;
}