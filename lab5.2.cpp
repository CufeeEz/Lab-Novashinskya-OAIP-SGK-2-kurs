#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[100], c = 0, b;
    cout << "Введите число: ";
    cin >> b;
    b += 1;
    for (int i = 0; i < b; i++)
    {
        a[i] = i;
        if (i > 0 and i % 2 == 0)
        {
            c = a[i] * 2;
            cout << a[i] << " в квадрате = " << c << endl;
        }
    }
    return 0;
}