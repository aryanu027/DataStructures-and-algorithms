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
Node *head = NULL;
void push(int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}
void pop()
{
    if (head==NULL)
    {
        return;
    }
    Node* temp;
    temp=head->next;
    head=temp;
    // free(temp);
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    push(5);
    push(6);
    push(8);
    pop();
    // push(10);
    // display();
    return 0;
}