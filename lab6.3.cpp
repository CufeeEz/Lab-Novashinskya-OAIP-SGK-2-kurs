#include <iostream>
using namespace std;
int maximum(int* arr)
{
    int max;
    max = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    setlocale(0, "Russian");
    int massivA[3], massivB[3], massivC[3];
    cout << "Введите 3 числа в массив A" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> massivA[i];
    }
    cout << "Введите 3 числа в массив B" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> massivB[i];
    }
    cout << "Введите 3 числа в массив C" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> massivC[i];
    }
    int MaxA = maximum(massivA);
    int MaxB = maximum(massivB);
    int MaxC = maximum(massivC);
    int r = (MaxA * MaxB) / MaxC;
    cout << "Ответ: " << r << endl;
}