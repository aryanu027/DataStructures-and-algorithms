#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[INT16_MAX];
int front=0, rear = -1;
bool isEmpty()
{
    if (rear == -1 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if (rear == sizeof(a) / sizeof(a[0]) - 1 && front==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Enqueue(int x)
{
    if (isEmpty() == true)
    {
        rear = 0;
        front = 0;
        a[0] = x;
    }

    else
    {
        rear++;
        a[rear] = x;
    }
};
void Dequeue()
{
    if (isEmpty() == false)
    {
        front++;
    }
}

int main()
{
    Enqueue(5);
    Enqueue(8);
    Enqueue(6);
    Enqueue(7);
    Dequeue();
    Dequeue();
    for (int i = front; i <= rear; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}