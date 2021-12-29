#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
	setlocale(0, "Russian");
	ofstream outfile("Result.txt");
	int const n = 5;
	int a[n][n];
    srand(time(NULL));
    outfile << "Сгенерирванный массив" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 5; ii++)
        {
            a[i][ii] = rand() % 40;
            outfile << a[i][ii] << " ";
            if (ii == 4)
            {
                outfile << "\n";
                cout << endl;
            }
        }
    }
    int summ = 0;
    outfile << "Сумма элементов каждого столбца(строки) = ";
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 5; ii++)
        {
            summ += a[i][ii];
            cout << summ << endl;
            if (ii == 4)
            {
                outfile << summ << " ";
                summ = 0;
            }
        }
    }
	return 0;
}