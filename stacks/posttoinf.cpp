#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[500];
int top = -1;
void push(int x)
{
    top++;
    a[top] = x;
}
void pop()
{
    top--;
}
int convert(string b)
{
    for (int i = 0; i < b.size(); i++)
    {
        // if they are numbers push them to stack
        if (b[i] >= 49 && b[i] <= 57)
        {
            push(b[i]-48);
        }
        else
        {
            int x = a[top];
            pop();
            int y = a[top];
            pop();
            switch (b[i])
            {
            case '+':
                push(y + x);
                break;

            case '-':
                push(y - x);
                break;
            case '*':
                push(y * x);
                break;
            case '/':
                push(y / x);
                break;
            }
        }
    }
    return a[top];
}
int main()
{
    string q = "22*22*-4-";
    cout << convert(q);
    return 0;
}