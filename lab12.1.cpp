﻿#include <iostream>
using namespace std;
int fib(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return fib(num - 1) + fib(num - 2);
}
int main()
{
    for (int i = 0; i < 13; ++i)
    {
        cout << fib(i) << " ";
    }

    return 0;
}