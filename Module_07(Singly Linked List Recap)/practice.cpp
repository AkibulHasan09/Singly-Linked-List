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


void printOrder(node *n){
    if(n == NULL) return;
    cout << n->val << "  ";
    printOrder(n->next);
}


void reverseOrder(node *n){
    
    if(n == NULL) return;

    
    reverseOrder(n->next);
    cout << n->val << "  ";
    
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

    printOrder(head);
    cout << endl;
    cout << "Printing reverse order: " << endl;
    reverseOrder(head);
    

    return 0;
}