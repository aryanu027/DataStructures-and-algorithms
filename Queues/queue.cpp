#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[4];
int front = -1, rear = -1;
bool isEmpty()
{
    if (rear == -1 && front == -1)
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
    if ((rear + 1) % (sizeof(a) / sizeof(a[0])) == front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//
void Enqueue(int x)
{
    if (isFull() == true)
    {
        cout << "Full Queue: " << endl;
        return;
    }
    else if (isEmpty())
    {
        front = 0;
        rear = 0;
        a[rear] = x;
    }
    else
    {
        rear = (rear + 1) % (sizeof(a) / sizeof(a[0]));
        a[rear] = x;
    }
};
void Dequeue()
{
    if (isEmpty())
    {
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % (sizeof(a) / sizeof(a[0]));
    }
}

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Dequeue();
    Enqueue(5);
    for (auto i:a)
    {
        cout << i << endl;
    }
    return 0;
}