#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int n, k = 0;
    cout << "Введите целое число (N>0): ";
    cin >> n;
    if (n > 0)
    {
        while (n > 1)
        {
            n /= 2;
            k += 1;
        }
        cout << "Ответ: " << k;
    }
    else
    {
        cout << "Вы ввели неподходящее число!";
    }
    return 0;
}