#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *front = NULL;
Node *rear = NULL;
void Enqueue(int x)
{
    Node *n = new Node(x);
    // Node *temp = first;
    if (rear == NULL)
    {
        front = n;
        rear = n;
        return;
    }
    rear->next = n;
    rear = n;
}
void Dequeue()
{
    if (front == NULL)
    {
        return;
    }
    front = front->next;
    if (front == NULL)
    {
        rear = NULL;
    }
}
int main()
{
    Enqueue(5);
    Enqueue(4);
    Enqueue(2);
    Enqueue(10);
    Dequeue();
    Dequeue();
    cout << "front is: " << front->data << " rear is: " << rear->data << endl;
    return 0;
}