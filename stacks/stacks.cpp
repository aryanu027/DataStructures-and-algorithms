#include <iostream>
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
int Top()
{
    return a[top];
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

void print()
{
    if (top > -1)
    {
        for (int i = 0; i <= top; i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    push(10);
    push(12);
    pop();
    push(13);
    push(16);
    push(19);
    pop();
    print();
    cout<<Top()<<endl;
    cout<<is_Empty();

    return 0;
}