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

void inserting(node*&head, node *&tail, int val){
    node *newNode = new node(val);
    if(head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printing(node *head){
    node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    while(true){
        int val;    cin >> val;
        if(val == -1)  break;
        inserting(head, tail, val);
    }
    cout << "Printing Linked List: " << endl;
    printing(head);
    
    return 0;
}