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

void delete_at_tail(Node* &head,Node* &tail,int postion){

    Node* tmp=head;
    for(int i=1;i<postion;i++){
        tmp=tmp->next;
    }
    Node* del_value_store=tmp->next;
    tmp->next=tmp->next->next;
    delete del_value_store;
    tail=tmp;
    



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
    delete_at_tail(head,tail,9);
    print_linklist(head);
    





    return 0;
}