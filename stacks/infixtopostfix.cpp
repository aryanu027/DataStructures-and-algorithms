#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char n[500];
int top = -1;
void push(char x)
{
    top++;
    n[top] = x;
}
void pop()
{
    top--;
}
bool is_Empty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int precedence(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '/' || a == '*')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string a)
{
    string res = "";
    for (int i = 0; i < a.size(); i++)
    {
        // if an opening parantheses well push in stack
        if (a[i] == '(')
        {
            push(a[i]);
        }
        // direct value in a-z is given we'll print
        else if (a[i] >= 97 && a[i] <= 122)
        {
            res += a[i];
        }
        // case of closing brackets
        else if (a[i] == ')' && is_Empty() == false)
        {
            // this line will remove all elements b/w ( and ) adn add them to res.
            while (n[top] != '(')
            {
                res += n[top];
                pop();
            }
            // additional line to pop to last )
            if (is_Empty() == false)
            {
                pop();
            }
        }
        // case of an operator
        else
        {
            // precedence is used in case brackets are not mentioned then ^ comes before * and / which comes before + and -
            // in case of no element present it will be -1
            while (is_Empty() == false && precedence(n[top]) > precedence(a[i]))
            {
                res += n[top];
                pop();
            }
            push(a[i]);
        }
    }
    // after traversel of loop if there are still elelments left in stack
    while (is_Empty() == false)
    {
        res += n[top];
        pop();
    }
    return res;
}
int main()
{
    string wq = "(((a+b)-(x*y))+(p-q))/r";
    cout << infixtopostfix(wq);
    return 0;
}