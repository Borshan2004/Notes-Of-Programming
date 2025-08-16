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



int count_size_of_linkdist(Node* head){
    Node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        
        tmp=tmp->next;
        cnt++;
    }
    return cnt;
    
}

void check_the_value_of_linklist_same_or_not(Node* head1,Node* head2){
    Node* tmp1=head1;
    Node* tmp2=head2;
    bool flag=true;
    while (tmp1!=NULL&&tmp2!=NULL)
    {
        if(tmp1->value!=tmp2->value){
            flag=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}




int main(){

    Node* head1= NULL;
    Node* tail1=NULL;


    while (1)
    {
        int x;
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head1,tail1,x);
    }

   
    
    Node* head2= NULL;
    Node* tail2=NULL;


    while (1)
    {
        int x;
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head2,tail2,x);
    }

    int sz1= count_size_of_linkdist(head1);
    int sz2= count_size_of_linkdist(head2);


    if(sz1!=sz2){
        cout<<"NO";
    }
    else{
        check_the_value_of_linklist_same_or_not(head1,head2);
    }
   





    return 0;
}