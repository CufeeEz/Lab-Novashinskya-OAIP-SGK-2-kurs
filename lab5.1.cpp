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
            if (a[i] % 5 == 0)
            {
                c = a[i] + c;
            }
        }
    }
    else
    {
        cout << "Некорректный запрос.";
    }
    cout << c;
    return 0;
}
