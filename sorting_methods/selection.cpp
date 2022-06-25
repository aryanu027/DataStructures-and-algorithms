#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ // Selection sort
    int a[7] = {2, 6, 4, 10, 19, 3, 14};
    for (int i = 0; i < 6; i++)
    {
        int min = i;
        for (int j = i + 1; j < 7; j++) // checking minimum value in  array next ith position.
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i]; // swapping process
        a[i] = a[min];
        a[min] = temp;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}