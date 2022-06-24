#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char a[INT16_MAX];
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
void print()
{
    if (top > -1)
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << " ";
        }
    }
}
class Solution
{
public:
    string reverseParentheses(string s)
    {
        int curr;
        int prev;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                prev = i;
                push(s[i]);
            }
            else if (s[i] == ')')
            {
                curr = i;
                push(s[i]);
                reverse(s.begin() + prev, s.begin() + curr);
                s.erase(s.begin() + curr);s.erase(s.begin() + prev);
            }
            else
            {
                push(s[i]);
            }
        }
        
        return s;
    }
};
int main()
{
    string a = "i(love)u";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '(' || a[i] == ')')
        {
            a.erase(a.begin() + i);
            i--;
        }
    }
    cout << a;
    // Solution s;
    // cout<<s.reverseParentheses(a);
    // cout << endl;
    return 0;
}