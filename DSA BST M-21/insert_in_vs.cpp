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


Node* input_in_binnary_tree(){
  
    int root_val;
    cin>>root_val;
    if (root_val == -1) return NULL;
    Node* root=new Node(root_val);

    queue<Node*>q;
    q.push(root);

   

    while (!q.empty())
    {
        Node* getout_root_now_parent=q.front();
        q.pop();

       

        int l,r;
        cin>>l>>r;
        Node* my_node_l;
        Node* my_node_r;

        if(l==-1){
            my_node_l=NULL;
        }
        else{
            my_node_l=new Node(l);
        }

        
        if(r==-1){
            my_node_r=NULL;
        }
        else{
            my_node_r=new Node(r);
        }

        getout_root_now_parent->left=my_node_l;
        getout_root_now_parent->right=my_node_r;

       


        

        if(getout_root_now_parent->left!=NULL){
            q.push(getout_root_now_parent->left);
        }

        if(getout_root_now_parent->right!=NULL){
            q.push(getout_root_now_parent->right);
        }

    }
    return root;
    

}

void levelorder_print(Node* root){

    if(root==NULL){
        cout<<"there  is  no tree ";
        return;
    }

    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
       
        Node* get_out=q.front();
        q.pop();

       
        cout<<get_out->val<<" ";

        

        if(get_out->left!=NULL){
            q.push(get_out->left);
        }

        if(get_out->right!=NULL){
            q.push(get_out->right);
        }


    }
    
}

void insert_in_binnary_search_tree(Node* root,int value){

    if(root==NULL){
        root=new Node(value);
        return;
    }

    if(root->val>value){
        if(root->left==NULL){
            root->left=new Node(value);
        }
        else{
            insert_in_binnary_search_tree(root->left,value);
        }
    }
    else{

        if(root->right==NULL){
            root->right=new Node(value);
        }
        else{
            insert_in_binnary_search_tree(root->right,value);
        }
    }


}



int main(){

Node* root = input_in_binnary_tree();
int x;
cin>>x;
insert_in_binnary_search_tree(root,x);
levelorder_print(root);

return 0;
}