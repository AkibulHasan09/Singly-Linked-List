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

void inserting(node *&head, int val){
    node *newNode = new node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insertAny(node* head, int val, int pos){
    node *newNode = new node(val);
    int c = 0;
    node *tmp = head;
    while(c < pos -1){
        tmp = tmp->next;
        c++;
    } 
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void printing(node *head){
    node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << "  ";
        tmp = tmp->next;
    }  
}

int size(node* head){
    node* tmp = head;
    int cnt = 0;
    while(tmp != NULL){
         cnt++;
        tmp = tmp->next;
        
    }
    return cnt;
}

void insertHead(node *&head, int val){
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
int main()
{
    node *head = NULL;
    while(true){
        int val;    cin >> val;
        if(val == -1) break;
        inserting(head, val);
    }

    int  val, pos;  cin >> val >> pos;
    if(pos > size(head)){
        cout << "Not Possible" << endl;
    }
    else if(pos == 0){
        insertHead(head, val);
    }
    else{
        insertAny(head, val, pos); 
    }
    

    printing(head);
    return 0;
}