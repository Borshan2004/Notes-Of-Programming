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
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}


int max_in_linklist(Node* head){
    int maximum=INT_MIN;
    Node* tmp=head;

    while (tmp!=NULL)
    {
        maximum=max(tmp->value,maximum);
        tmp=tmp->next;
    }
    return maximum;
    
}


int minimum_in_linklist(Node* head){
    int minimum=INT_MAX;
    Node* tmp=head;

    while (tmp!=NULL)
    {
        minimum=min(tmp->value,minimum);
        tmp=tmp->next;
    }
    return minimum;
    
}




int main(){

    Node* head=NULL;
    Node* tail=NULL;

    while (1)
    {
        int x;
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head,tail,x);
    }


    int maxi=max_in_linklist(head);
    int mini=minimum_in_linklist(head);

    int diff=maxi-mini;
    cout<<diff;
    
    

    

    return 0;
}