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
void pop()
{
    if (top == -1)
    {
        cout << "no element left to pop" << endl;
    }
    else
    {
        top--;
    }
}
int perform(char a, char b, char c)
{
    switch (b)
    {
    case '+':
        return int(a) + int(c);
        break;
    case '-':
        int(a) - int(c);
        break;
    case '*':
        int(a) * int(c);
        break;
    case '/':
        int(a) / int(c);
        break;

    default:
        break;
    }
}
void calc(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > 47 && a[i] < 58)
        {
            push(a[i]);
        }
        else if (a[i] == 42 || a[i] == 43 || a[i] == 45 || a[i] == 47)
        {
            int k = perform(a[i - 1], a[i], a[i - 2]);
            pop();
            pop();
            push(k);
        }
    }
}
int main()
{
    string a = "23*54+*10-2*";
    calc(a);
    return 0;
}