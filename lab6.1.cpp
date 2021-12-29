#include <iostream>
using namespace std;
int min(int xx, int yy)
{
    int minn = 0;
    if (xx < yy)
    {
        return xx;
    }
    else
    {
        return yy;
    }
}
int main()
{
    setlocale(0, "Russian");
    int x, y, z, v;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Минимальное число из двух чисел = " << min(x, y) << endl;
    int minimum = min(x, y);
    cout << "Введите число z: ";
    cin >> z;
    cout << "Введите число v: ";
    cin >> v;
    int minimum4 = min(z, v);
    cout << "Минимальное число из 4 чисел = " << min(minimum, minimum4) << endl;
    return 0;
}