#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[1005][1005];
bool vis[1005][1005];

vector<pair<int,int>> movment={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int src_i,int src_j){

    if(src_i<0||src_i>=n||src_j<0||src_j>=m){
        return false;
    }
    else{
        return true;
    }

}


void dfs(int src_i,int src_j){
    vis[src_i][src_j]=true;

    for(int i=0;i<4;i++){
        int child_src_i=src_i+movment[i].first;
        int child_src_j=src_j+movment[i].second;

        if(valid(child_src_i,child_src_j)==true&&vis[child_src_i][child_src_j]==false&&grid[child_src_i][child_src_j]=='.'){
            dfs(child_src_i,child_src_j);
            vis[child_src_i][child_src_j]=true;
        }
    }

}

int main(){

    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    int src_start_i,src_start_j,src_end_i,src_end_j;

    cin>>src_start_i>>src_start_j;
    cin>>src_end_i>>src_end_j;



    memset(vis,false,sizeof(vis));
    dfs(src_start_i,src_start_j);

    if(vis[src_end_i][src_end_j]==true)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

return 0;
}