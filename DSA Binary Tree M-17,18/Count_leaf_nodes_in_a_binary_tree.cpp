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


Node* input_in_binnary(){
    int root_val;

    cin>>root_val;
    Node* root=new Node(root_val);

    queue<Node*>q;
    q.push(root);


    while (!q.empty())
    {
        Node* getout=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* my_l;
        Node* my_r;

        if(l==-1){
            my_l=NULL;
        }
        else{
             my_l= new Node(l);
        }


        if(r==-1){
             my_r=NULL;
        }
        else{
            my_r= new Node(r);
        }

        getout->left=my_l;
        getout->right=my_r;


        if(getout->left!=NULL){
            q.push(getout->left);
        }

        if(getout->right!=NULL){
            q.push(getout->right);
        }



    }
    return root;
    
}

int binnary_leaf_node_count(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 1;
    }
    int l=binnary_leaf_node_count(root->left);
    int r=binnary_leaf_node_count(root->right);
    return l+r;
}





int main(){

    Node* root=input_in_binnary();

    cout<<binnary_leaf_node_count(root);



    return 0;
}