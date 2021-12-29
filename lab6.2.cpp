#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    setlocale(0, "Russian");
    int x, y;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    int z = max(x, 2 * y * x) + max(5 * x + 3 * y, y);
    cout << z;
    return 0;
} 