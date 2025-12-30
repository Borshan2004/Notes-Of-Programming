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

void insert_at_head(Node* &head,int val){

    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;

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
    Node* b=new Node(30);

    head->next=a;
    a->next=b;

    insert_at_head(head,100);
    insert_at_head(head,500);
    print_linklist(head);





    return 0;
}