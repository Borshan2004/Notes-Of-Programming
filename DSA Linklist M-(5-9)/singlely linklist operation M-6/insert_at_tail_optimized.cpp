#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;


    Node(int val){

        this->value=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* tail,int value){
     
    Node* newnode= new Node(value);
    if (head == NULL) {
        head = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_linklist(Node* head){

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<endl;
        tmp=tmp->next;

    }
    
}




int main(){

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->next=tail;

   insert_at_tail(head,tail,499);
    print_linklist(head);
    





    return 0;
}