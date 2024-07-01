#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* next;

        node(int val){
            
            this->val = val;
            this->next = NULL;
        }
};

void printing(node *& head){
    node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp= tmp->next;
    }
}

int main(){
    // node* a = new  node(10);
    // node* b = new  node(90);
    //a->next = b;
    // cout << a->val << endl;
    // cout << "Print other way: " << endl;
    // cout << (*a).val << endl;
    // cout << "Printing a next: " << a->next->val << endl;



    node* a = new  node(10);
    node* b = new  node(90);
    node* c = new  node(99);
    node* d = new  node(97);
    node* e = new  node(69);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << a->val << endl;
    cout << a->next->val << endl;
    cout << a->next->next->val << endl;

    cout << "Value of e: " << c->next->next->val << endl;
    node* head = a;

    cout << "Printing Linked list using function: " << endl;
    printing(head);

    return 0;
}

