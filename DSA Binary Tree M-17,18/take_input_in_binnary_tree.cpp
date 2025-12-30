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
    //take a input for root and make a new node for node and 
    //then make a que and push the node of the root in the que 
    int root_val;
    cin>>root_val;
    Node* root=new Node(root_val);

    queue<Node*>q;
    q.push(root);

    //step-1
    //get out the root node form the que and save it in the another node 
    //and also pop the root node from the que

    while (!q.empty())
    {
        Node* getout_root_now_parent=q.front();
        q.pop();

        //step-2
        //work with node 
        //take two new value l and r and then if it is not -1 
        //then make it as two node ->my_node_l and my_node_r
        //at the end conect the two new nodes with the get_out_parent_node

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

        //why we do the previous work
        //we must remember theat for evey getout node there must be 
        //two input of l and r node and at the end they must be add
        //in the que 




        //step-3
        //push the get_out_node_new_parent left and right node in the que

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

    Node* root=input_in_binnary_tree();

    levelorder_print(root);




    return 0;
}