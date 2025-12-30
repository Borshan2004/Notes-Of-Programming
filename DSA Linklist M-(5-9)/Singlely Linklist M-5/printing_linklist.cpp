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

int main(){

    Node* head=new Node(10);
    Node* a=new Node(30);
    Node* b=new Node(400);
    Node* c=new Node(20);
    Node* d=new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<endl;
        tmp=tmp->next;
    }
    //if want to print again
    cout<<endl;
    tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<endl;
        tmp=tmp->next;
    }



    return 0;
}