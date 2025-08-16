#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next_value_address;


    Node(int val){

        this->value=val;
        this->next_value_address=NULL;
    }
};


int main(){

    Node a(30),b(40),c(50);

    // a.value=10;
    // b.value=20;
    // c.value=30;

    a.next_value_address=&b;
    b.next_value_address=&c;
      
    cout<<a.value<<endl;
    cout<<a.next_value_address->value<<endl;
    cout<<a.next_value_address->next_value_address->value<<endl;









    return 0;
}