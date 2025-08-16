#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
//here all like root,a,b,c........are node and all have 
// left and right and a value in every node 
void levelorder_print(Node* root){

    if(root==NULL){
        cout<<"there  is  no tree ";
        return;
    }

    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        //1-> do the que value get out
        Node* get_out=q.front();
        q.pop();

        //2-> print the value that is get out
        cout<<get_out->val<<" ";

        //3-> push the child of the get_out node

        if(get_out->left!=NULL){
            q.push(get_out->left);
        }

        if(get_out->right!=NULL){
            q.push(get_out->right);
        }


    }
    
}



int main(){

    Node* root= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    Node* e= new Node(60);

    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;

    levelorder_print(root);





    return 0;
}