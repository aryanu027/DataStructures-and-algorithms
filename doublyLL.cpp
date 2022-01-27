#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    };
};

void insert_at_end(Node *&first, int value)
{
    Node *n = new Node(value);
    Node *temp = first;
    if (first == NULL)
    {
        first = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void insert_at_n(Node *&first, int value, int index)
{
    Node *temp1 = new Node(value);
    Node *temp3 = first->next;
    if (index == 1)
    {
        temp1->next = first;
        temp3->prev = temp1;
        first = temp1;
        return;
    }
    Node *temp2 = first;
    for (int i = 0; i < index - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->prev = temp2;
    Node *n = temp2->next;
    n->prev = temp1;
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void delete_at_n(Node *&first, int index)
{
    if (index == 1)
    {
        Node *temp5 = first;
        Node *temp10 = temp5->next;
        temp10->prev = NULL;
        first = temp5->next;
        delete temp5;
    }
    else
    {
        Node *temp3 = first;
        for (int i = 0; i < index - 2; i++)
        {
            temp3 = temp3->next;
        }
        Node *temp4 = temp3->next;
        Node *temp11 = temp4->next;
        temp11->prev = temp3;
        temp3->next = temp4->next;
        delete temp4;
    }
}
void Reverse(Node *&first)
{
    Node *temp, *current;
    temp = first;
    current=temp->next;
    while (current!=NULL)
    {
        temp=temp->next;
        current=current->next;
    }
    first=current;
    while (current->prev!=NULL)
    {
        current->prev=current->prev;
        current->next=temp;
        current=current->next;
        temp=temp->next;
    }
    temp->next=NULL;
}
void display(Node *first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    
    return 0;
}