#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void MergeSort(int arr[], int len)
{
    if (len < 2)
    {
        return;
    }
    int mid = len / 2;
    int arr_l[mid];
    int arr_r[len - mid];
    for (int i = 0; i < mid; i++)
    {
        arr_l[i] = arr[i];
    }
    for (int i = 0; i < len - mid; i++)
    {
        arr_r[i] = arr[mid + i];
    }
    MergeSort(arr_l, mid);
    MergeSort(arr_r, len - mid);
    merge(arr_l, arr_l + mid, arr_r, arr_r + (len - mid), arr);
}

int main()
{
    int a[7] = {2, 6, 4, 10, 19, 3, 14};
    MergeSort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}