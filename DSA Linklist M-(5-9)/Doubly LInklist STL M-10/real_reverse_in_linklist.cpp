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


void reverse_linklist(Node* &head,Node* &tail,Node* tmp){

    if(tmp->next==NULL){
        head=tmp;
        return;
    }

    reverse_linklist(head,tail,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
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
    reverse_linklist(head,tail,head);

    // print_linklist(head);
    cout<<head->value<<endl;
    cout<<tail->value<<endl;





    return 0;
}