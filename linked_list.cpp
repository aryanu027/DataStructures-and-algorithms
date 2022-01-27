#include <iostream>
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
}
void Sum_of_nodes(Node *first)
{
    Node *temp = first;
    int count = 0;
    while (temp != NULL)
    {
        count = count + temp->data;
        temp = temp->next;
    }
    cout << count << endl;
}
void Max_value(Node *first)
{
    Node *temp = first;
    int max_sum = first->data;
    while (temp != NULL)
    {
        if (temp->data > max_sum)
        {
            max_sum = temp->data;
        }
        temp = temp->next;
    }
    cout << max_sum << endl;
}
void Search(Node *first, int value)
{
    Node *temp = first;
    int i = 1;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            cout << i << endl;
            break;
        }
        else
        {
            i++;
            temp = temp->next;
        }
    }
}
void Reverse(Node *&first)
{
    Node *temp, *prev, *current;
    temp = first;
    prev = NULL;
    while (temp != NULL)
    {
        current = temp->next;
        temp->next = prev;
        prev = temp;
        temp = current;
    }
    first = prev;
}

void Reverse_print_using_rec(Node *LL, Node *&first)
{
    if (LL == NULL)
    {
        first = LL;
        return;
    }
    Reverse_print_using_rec(LL->next, first);
    cout << LL->data << " ";
}
void Reverse_rec(Node *LL, Node *&first)
{
    if (LL->next == NULL)
    {
        first = LL;
        return;
    }
    Reverse_rec(LL->next, first);
    Node *QQ = LL->next;
    QQ->next = LL;
    LL->next = NULL;
}
void Count_nodes(Node *first)
{
    Node *temp = first;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}
void insert_in_sorted(Node *&first, int value)
{
    Node *n = new Node(value);
    Node *temp = first;
    Node *prev = NULL;
    if (first == NULL)
    {
        first = n;
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
        if (temp->data > value && prev->data < value)
        {
            prev->next = n;
            n->next = temp;
            break;
        }
        else if (prev->data > value)
        {
            first = n;
            n->next = prev;
            break;
        }
        else if (temp->data < value)
        {
            temp = temp->next;
            temp->next = n;
            break;
        }
    }
}
void insert_at_n(Node *&first, int value, int index)
{
    Node *temp1 = new Node(value);
    if (index == 1)
    {
        temp1->next = first;
        first = temp1;
        return;
    }
    Node *temp2 = first;
    for (int i = 0; i < index - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void delete_at_n(Node *&first, int index)
{
    if (index == 1)
    {
        Node *temp5 = first;
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
        Node *temp4 = first;
        temp4 = temp3->next;
        temp3->next = temp4->next;
        delete temp4;
    }
}
void sortcheck(Node *first)
{
    Node *temp = first;
    Node *temp2 = temp->next;
    while (temp != NULL)
    {
        if (temp2->data < temp->data)
        {
            cout << "not sorted" << endl;
            return;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    cout << "sorted" << endl;
}

Node *merge(Node *first, Node *second)
{
    Node *temp1 = first;
    Node *temp2 = second;
    Node *merged = new Node(0);
    Node *final = new Node(0);
    if (temp1->data < temp2->data)
    {
        final = temp1;
    }
    else if (temp1->data > temp2->data)
    {
        final = temp2;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            merged->next = temp1;
            temp1 = temp1->next;
        }
        else if (temp1->data > temp2->data)
        {
            merged->next = temp2;
            temp2 = temp2->next;
        }
        merged = merged->next;
    }
    while (temp1 != NULL)
    {
        merged->next = temp1;
        temp1 = temp1->next;
        merged = merged->next;
    }
    while (temp2 != NULL)
    {
        merged->next = temp2;
        temp2 = temp2->next;
        merged = merged->next;
    }
    return final;
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