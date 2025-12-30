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
int main(){

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->pre=head;

    a->next=tail;
    tail->next=a;

    return 0;
}