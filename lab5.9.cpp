#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a[5][5], summ = 0, maax[5], max = 0;
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
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 5; ii++)
        {
            if (i + ii == 4)
            {
                if (max < a[i][ii])
                {
                    max = a[i][ii];
                }
            }
        }
    }
    cout << "Максимальный элементов двумерного массива находящихся в дополнительной диагонали = " << max << endl;
    return 0;
}