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

Node* convert_array_to_BST(int arr[],int n,int l,int r){

    if(l>r){
        return NULL;
    }

    //step -1 ->first find the mid using bunnary search and it will be the root
    int mid=(l+r)/2;
    Node* root= new Node(arr[mid]);
    // step -2 -> the define the left and right side of the mid in separate and using it Make two BST of left and right
    Node* left_array_root=convert_array_to_BST(arr,n,l,mid-1);
    Node* right_array_root=convert_array_to_BST(arr,n,mid+1,r);

    //step -3 -> conect the left and right BST from the arry mid left and right with the root node 
    root->left=left_array_root;
    root->right=right_array_root;

    return root;

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* root=convert_array_to_BST(arr,n,0,n-1);
    levelorder_print(root);
    return 0;
}