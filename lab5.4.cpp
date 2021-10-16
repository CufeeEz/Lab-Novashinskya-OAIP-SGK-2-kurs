#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[50], c = 0, b;
    for (int i = 0; i < 50; i++)
    {
        a[i] = rand() % 11 - 5;
        cout << a[i] << " ";
        if (a[i] < 0)
        {
            c += 1;
        }
    }
    cout << "\n" << "Количество отрицательных чисел = " << c;
    return 0;
}