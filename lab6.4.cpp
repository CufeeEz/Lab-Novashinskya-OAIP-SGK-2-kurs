#include <iostream>
#include <cmath>
using namespace std;
int notx(int n, float x)
{
    float resul = pow(x,n) / n;
    return resul;
}
int main()
{
    setlocale(0, "Russian");
    int x;
    int n;
    cout << "Введите число x" << endl;
    cin >> x;
    cout << "Введите число n" << endl;
    cin >> n;
    float f = notx(n, x);
    cout << "Результат функции = " << f << endl;
    int rez = pow(f, 2) / 2 + pow(f, 4) / 4 + pow(f, 6) / 6;
    cout << "Ответ = " << rez;
}