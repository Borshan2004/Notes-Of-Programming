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

void delete_at_any_position(Node* &head,int indx){

    Node* tmp=head;
    for(int i=1;i<indx;i++){
        tmp=tmp->next;
    }
    Node* delete_value=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->pre=tmp;
}


int main(){

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->pre=head;

    a->next=tail;
    tail->pre=a;


    delete_at_any_position(head,1);
    foward_print_in_linklist(head);
    
    

    return 0;
}