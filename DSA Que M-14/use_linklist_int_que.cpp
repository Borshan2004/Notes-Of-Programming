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

class myQue{
    public:
    Node* head=NULL;
    Node* tail=NULL;


    void push(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }

    void pop(){
        
        Node* newnode_delete=head;
        head=head->next;
        delete newnode_delete;
        if(head==NULL){
            tail=NULL;
        }
    }


    int front(){
        return head->value;
    }

    int back(){
        return tail->value;
    }

    

    bool empty(){
        return head==NULL;
    }

};

int main(){

    myQue que;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        que.push(value);
    }

    while (!que.empty())
    {
        cout<<que.front()<<endl;
        que.pop();
        
    }

    
    

    return 0;
}