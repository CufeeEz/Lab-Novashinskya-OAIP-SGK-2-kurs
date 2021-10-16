// решение не совсем такое, буду переделывать 
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[5];
    cout << "Введите 5 целых чисел" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    if (a[0] == a[1] or a[0] == a[2] or a[0] == a[3] or a[0] == a[4])
    {
        cout << a[0] << "=" << a[0];
    }
    else if(a[1] == a[0] or a[1] == a[2] or a[1] == a[3] or a[1] == a[4])
    {
        cout << a[1] << "=" << a[1];
    }
    else if (a[2] == a[0] or a[2] == a[1] or a[2] == a[3] or a[2] == a[4])
    {
        cout << a[2] << "=" << a[2];
    }
    else if (a[3] == a[0] or a[3] == a[1] or a[3] == a[2] or a[3] == a[4])
    {
        cout << a[2] << "=" << a[2];
    }
    else if (a[4] == a[0] or a[4] == a[1] or a[4] == a[2] or a[4] == a[3])
    {
        cout << a[2] << "=" << a[2];
    }
    else
    {
        cout << "Совпадений нет";
    }
    return 0;
}
 