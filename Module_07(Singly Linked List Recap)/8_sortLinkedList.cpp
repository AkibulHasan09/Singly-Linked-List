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

void inserting(node *&head, node *&tail, int val){
    node *newNode = new node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
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

void sort_Ascending(node *head){
    node* tmp = head;
     while(tmp != NULL){
        node *tmp1 = tmp->next;
        while(tmp1 != NULL){
            if(tmp->val > tmp1->val){
            swap(tmp->val, tmp1->val);
        }
        tmp1 = tmp1->next;
        }
        
        tmp = tmp->next;
     }
}

void sort_descending(node *head){
    node* tmp = head;
     while(tmp != NULL){
        node *tmp1 = tmp->next;
        while(tmp1 != NULL){
            if(tmp->val < tmp1->val){
            swap(tmp->val, tmp1->val);
        }
        tmp1 = tmp1->next;
        }
        
        tmp = tmp->next;
     }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while(true){
        int val;    cin >> val;
        if(val == -1) break;
        inserting(head,tail, val);
    }
    cout << "Printing Linked list: " << endl;
    printing(head);
    sort_Ascending(head);
    cout << "Printing ascending Order Linked List: " << endl;
    printing(head);
    cout << "Printing descendng Order Linked List: " << endl;
    sort_descending(head);
    printing(head);

    return 0;
}