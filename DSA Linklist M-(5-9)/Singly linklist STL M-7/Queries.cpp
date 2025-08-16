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

void insert_at_head(Node* &head,Node* &tail,int val){

    Node* newnode=new Node(val);
     if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next=head;
    head=newnode;


}


void insert_at_any_position(Node* head,int index,int value){
    Node* newnode=new Node(value);
    Node* tmp=head;
    for(int i=0;i<index-1;i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}



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

void delete_at_head(Node* &head){
    if (head == NULL) return;  
    Node* d_head=head;
    head=head->next;
    delete d_head;
}

void delete_at_any_position(Node* &head,int postion){

    Node* tmp=head;
    for(int i=1;i<postion;i++){
        tmp=tmp->next;
    }
    Node* del_value_store=tmp->next;
      
    
    tmp->next=tmp->next->next;
    delete del_value_store;
    



}

void delete_at_tail(Node* &head,Node* &tail,int postion){

    Node* tmp=head;
    for(int i=1;i<postion;i++){
        tmp=tmp->next;
    }
    Node* del_value_store=tmp->next;
      
    
    tmp->next=tmp->next->next;
    delete del_value_store;
      tail = tmp;



}


int size_of_the_linklist(Node* head){
    Node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {

        tmp=tmp->next;
        cnt++;
    }
    return cnt;
    

}


void print_linklist(Node* head){

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->next;
        


    }
    cout<<endl;
    
    
}




int main(){

    Node* head=NULL;
    Node* tail=NULL;

   

    
    

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int size=size_of_the_linklist(head);
        int X;
        int V;
        cin>>X>>V;
        
       
        if(X==0){
            insert_at_head(head,tail,V);
            print_linklist(head);
            
            
        }
         else if(X==1){
            insert_at_tail(head,tail,V);
            print_linklist(head);
        
        }
        else if(X==2){
            if(V==0){
                delete_at_head(head);
                print_linklist(head);
            }
            else if(V<size-1){
            delete_at_any_position(head,V);
            print_linklist(head);
            }
            else if(V==size-1){
            delete_at_tail(head,tail,V);
            print_linklist(head);

            }
            else{
            print_linklist(head);
            }
            
           
        
        }

    }


    return 0;
}