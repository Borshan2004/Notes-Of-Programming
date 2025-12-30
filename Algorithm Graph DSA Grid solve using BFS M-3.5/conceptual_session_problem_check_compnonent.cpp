//2. count how many separate parts of the city exist?(HW-BFS solution)
#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[105][105];
bool vis[105][105];

vector<pair<int,int>> movment={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int src_i,int src_j){

    if(src_i<0||src_i>n||src_j<0||src_j>m){
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

        if(valid(child_src_i,child_src_j)==true&&vis[child_src_i][child_src_j]==false&&grid[child_src_i][child_src_j]!='*'){
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

    

    memset(vis,false,sizeof(vis));
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==false&&grid[i][j]=='.'){
                dfs(i,j);
                cnt++;
            }
        }
    }

    cout<<cnt;

return 0;
}