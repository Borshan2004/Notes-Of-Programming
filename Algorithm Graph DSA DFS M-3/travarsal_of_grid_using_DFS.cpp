#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
int n,m;
bool vis[105][105];

vector<pair<int,int>>movement={{-1,0},{1,0},{0,-1},{0,1}};

//this is the corner case to ckeck the validity of the childs, if the child is present in the range
bool valid(int c_s_i,int c_s_j){

    if(c_s_i<0||c_s_i>=n||c_s_j<0||c_s_j>=m){
        return false;
    }
    else{
        return true;
    }

}


void dfs(int src_i,int src_j){

    cout<<src_i<<" "<<src_j<<endl;
    vis[src_i][src_j]=true;

//for i=0 the src child will go to the upper 
//for i=1 the src child wiil go to the down 
//for i=2 the src child will go to the left 
//for i=3 the src child will go to the right


// for every src node there is at least 4 childs
    for(int i=0;i<4;i++){
// to traversal the grid we have to do the sum to go the posion of the 4 childs
        int c_src_i=src_i+movement[i].first;
        
        int c_src_j=src_j+movement[i].second;
        
        if(valid(c_src_i,c_src_j)==true&&vis[c_src_i][c_src_j]==false){
            dfs(c_src_i,c_src_j);//recursion is done here
        }
    }
    

}


int main(){
//here i is row and j is colum
    
    cin>>n>>m;
    
    //first work is take the input of the grid
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    //take the src code and it will be the stating of the grid travaral
    int src_i,src_j;
    cin>>src_i>>src_j;


    memset(vis, false, sizeof(vis));
    dfs(src_i,src_j);





return 0;
}