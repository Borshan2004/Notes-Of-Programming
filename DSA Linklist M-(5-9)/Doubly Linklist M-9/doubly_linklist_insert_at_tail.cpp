#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node* pre;


    Node(int val){

        this->value=val;
        this->next=NULL;
        this->pre=NULL;
        
    }
};

void insert_at_tail(Node* &head,Node* &tail,int value){

    Node* newnode=new Node(value);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
    
}


void foward_print_in_linklist(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    
}


void backward_print_in_linklist(Node* tail){
    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->pre;
    }
    
}



int main(){

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->pre=head;

    a->next=tail;
    tail->pre=a;

    insert_at_tail(head,tail,100);
    foward_print_in_linklist(head);
    
    

    return 0;
}