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

void insert_at_any_position(Node* head,int indx,int value){
    Node* newnode=new Node(value);
    Node* tmp=head;
    for(int i=1;i<indx;i++){
        tmp=tmp->next;

    }
    newnode->next=tmp->next;
    tmp->next->pre=newnode;
    tmp->next=newnode;
    newnode->pre=tmp;

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

   insert_at_any_position(head,2,500);
   insert_at_any_position(head,3,5800);
    foward_print_in_linklist(head);
    
    

    return 0;
}