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

bool seach_binary(Node* root,int value){

    if(root==NULL){
        return false;
    }

    if(root->val==value){
        return true;
    }

    if(root->val > value){
        return seach_binary(root->left,value);
    }
    else{
        return seach_binary(root->right,value);
    }


}



int main(){

Node* root = input_in_binnary_tree();
int value;
cin>>value;
if(seach_binary(root,value)==true){
    cout<<"FOUND";
}
else{
    cout<<"NOT FOUND";
}


return 0;
}