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
    };
};
void insert_at_head(Node *&first, int value)
{
    Node *n = new Node(value);
    if (first == NULL)
    {
        n->next = n;
        first = n;
        return;
    }
    Node *temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = first;
    first = n;
}
void insert_at_end(Node *&first, int value)
{
    Node *n = new Node(value);
    Node *temp = first;
    if (first == NULL)
    {
        insert_at_head(first, value);
        return;
    }

    while (temp->next != first)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = first;
}
void delete_at_n(Node *&first, int index)
{
    if (index == 1)
    {
        Node *temp5 = first;
        while (temp5->next != first)
        {
            temp5 = temp5->next;
        };
        Node *temp6 = first;
        first = temp6->next;
        temp5->next = temp6->next;
        // delete temp5;
    }
    else
    {
        Node *temp3 = first;
        for (int i = 0; i < index - 2; i++)
        {
            temp3 = temp3->next;
        }
        Node *temp4 = first;
        temp4 = temp3->next;
        temp3->next = temp4->next;
        delete temp4;
    }
}
void display(Node *first)
{
    Node *temp = first;
    do
    {
        cout << temp->next << " ";
        temp = temp->next;
    } while (temp != first);
}

int main()
{

    return 0;
}
