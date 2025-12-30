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


void reverse_in_doubly_linklist(Node* head,Node* tail){
    for(Node *i=head,*j=tail;i->value!=j->value&&i->pre->value!=j->value;i=i->next,j=j->pre){
        swap(i->value,j->value);
    }
}



int main(){

    Node* head=NULL;
    Node* tail=NULL;

    int x;
    while (1)
    {
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head,tail,x);

    }
    

    
    foward_print_in_linklist(head);
    reverse_in_doubly_linklist(head,tail);
    cout<<endl;
    foward_print_in_linklist(head);
    
    

    return 0;
}