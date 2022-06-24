#include <iostream>
using namespace std;

char a[INT16_MAX];
int top = -1;
void push(char x)
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
bool ArePair(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return true;
    }
    else if (a == '[' && b == ']')
    {
        return true;
    }
    else if (a == '{' && b == '}')
    {
        return true;
    }
    else
    {
        return false;
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

int main()
{
    char symbol[] = "[[]]";
    string output = "";
    for (int i = 0; i < 4; i++)
    {
        if (symbol[i] == '{' || symbol[i] == '[' || symbol[i] == '(')
        {
            push(symbol[i]);
        }
        else if (symbol[i] == '}' || symbol[i] == ']' || symbol[i] == ')')
        {
            if (top == -1)
            {
                output = "not symetric";
                break;
            }
            else if (ArePair(a[top], symbol[i]) == true)
            {
                pop();
            }
            else if (ArePair(a[top], symbol[i]) == false)
            {
                break;
            }
        }
    }
    if (output == "not symetric")
    {
        cout << output << endl;
    }

    else if (top > -1)
    {
        cout << "not symetric";
    }
    else
    {
        cout << "symetric";
    }

    return 0;
}