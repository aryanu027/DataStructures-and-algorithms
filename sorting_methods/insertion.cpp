#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   //insertion sort
    int a[7] = {2, 6, 4, 10, 19, 3, 14};
    for (int i = 1; i < 7; i++)
    {
        int value = a[i];
        int hole = i;
        while (value < a[hole - 1] && hole > 0)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}