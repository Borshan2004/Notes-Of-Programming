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



void search_in_linkdist(Node* head,int target_value){
    Node* tmp=head;
    int index=0;
    bool flag=false;
    while (tmp!=NULL)
    {

        if(tmp->value==target_value){
            cout<<index<<endl;
            flag=true;
            break;
        }
        tmp=tmp->next;
        index++;
        
    }
    if(flag==false){
        cout<<"-1"<<endl;
    }
    
    
}




int main(){

   

   int n;
   cin>>n;
   
   for(int i=0;i<n;i++){
    
    Node* head= NULL;
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
    
    
    
    int target_value;
    cin>>target_value;
    search_in_linkdist(head,target_value);

    }


   
    





    return 0;
}