#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[INT16_MAX];
int top = -1;
void push(int x)
{
    if (top == INT16_MAX - 1)
    {
        cout << "Stackoevrflow!" << endl;
    }
    else
    {
        top++;
        a[top] = x;
    }
}
void Reverse(char arr[],int len)
{
    for (int i=0;i<len;i++) //for pushing chars in stack
    {
        push(arr[i] );
    }

}

int main()
{
    char arr[] = {"RADHIKA"};
    int len=strlen(arr);
    cout<<len;
    Reverse(arr,len);
    return 0;
}