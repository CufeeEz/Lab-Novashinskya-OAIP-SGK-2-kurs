﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[5][5], summ = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 5; ii++)
        {
            a[i][ii] = rand() % 40;
            cout << a[i][ii] << " ";
            if (ii == 4)
            {
                cout << endl;
            }
            summ += a[i][ii];
        }
    }
    cout << "Сумма двумерного массива = " << summ << endl;
    return 0;
}