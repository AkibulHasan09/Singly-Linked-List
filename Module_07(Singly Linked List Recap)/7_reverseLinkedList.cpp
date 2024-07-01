#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int val;
        node* next;
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


// inOrder
void printing(node *n){
    if(n == NULL) return;
    cout << n->val << " ";
    printing(n->next);
}


// Reverse printing
void printing_reverse(node *n){
    if(n == NULL) return;
    
    printing_reverse(n->next);
   cout << n->val << " ";
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
    cout << "Printing in-Order: " << endl;
    printing(head);
    cout << endl;

    cout << "Printing reverse-Order: " << endl;
    printing_reverse(head);
    return 0;
}