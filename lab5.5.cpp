#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[50], c = 0, b = 0, ss, one = 26, two = -8;
    srand(time(NULL));
    cout << "Введите число: ";
    cin >> ss;
    if (ss < 0 or ss > 50)
    {
        cout << "Некорректный запрос.";
    }
    else
    {
        for (int i = 0; i < ss; i++)
        {
            a[i] = rand() % (one - two) + two;
            cout << a[i] << " ";
        }
    }
    return 0;
}
