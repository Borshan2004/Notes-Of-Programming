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

void insert_at_tail(Node* &head,Node* &tail,int value){
     
    Node* newnode= new Node(value);
    if (head == NULL) {
        head = newnode;
        tail=newnode;
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

void sort_in_linklist(Node* head){
    for(Node* i=head;i->next!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next){
            if(i->value>j->value){
                swap(i->value,j->value);
            }
        }
    }
}



int main(){

    Node* head= NULL;
    Node* tail=NULL;

    while(1){
        int x;
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head,tail,x);
    }
    sort_in_linklist(head);
    print_linklist(head);
    





    return 0;
}