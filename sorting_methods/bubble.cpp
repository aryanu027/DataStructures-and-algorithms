#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ // bubble sort
    int a[7] = {2, 6, 4, 10, 19, 3, 14};
    for (int i = 0; i < 7; i++)
    {
        int k = 0;    // k helps to improve time complexity
        int flag = 0; // used to chekc if midway array is sorted then loop breaks
        for (int i = 0; i < 6 - k; i++)
        {
            if (a[i + 1] < a[i])
            {
                int temp = a[i]; // swapping process
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;
            }
        }
        k++;
        if (flag == 0)
        {
            break;
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}