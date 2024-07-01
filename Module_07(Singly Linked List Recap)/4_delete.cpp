#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void inserting(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printing(node *head)
{
    node *tmp = head;
    cout << "Printing Linked List: " << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void deleteHead(node *&head)
{
    // node *tmp = head;
    head = head->next;
    // node *deleteNode = tmp;
    // delete deleteNode;
    cout << "Head deleted" << endl;
}

void deleteing(node *head, int pos)
{

    int c = 0;
    node *tmp = head;
    while (c < pos - 1)
    {
        tmp = tmp->next;
        c++;
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int size(node *head)
{
    int c = 0;
    node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        c++;
    }
    return c;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        inserting(head, tail, val);
    }

    printing(head);
    int pos;
    cin >> pos;
    if (pos == 0)
    {
        deleteHead(head);
        printing(head);
    }
    else
    {
        if (pos >= size(head))
        {
            cout << "Delete Not possible" << endl;
        }
        else
        {
            deleteing(head, pos);
            printing(head);
        }
    }

    return 0;
}