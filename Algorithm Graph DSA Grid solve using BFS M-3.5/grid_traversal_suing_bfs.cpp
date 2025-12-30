//we use bfs in the grid to get the shortage distance
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


void bfs(int src_i,int src_j){

    queue<pair<int,int>>q;
    q.push({src_i,src_j});

    while (!q.empty())
    {
         pair<int,int>get_out=q.front();
         q.pop();

        int  get_out_i=get_out.first;
        int  get_out_j=get_out.second;
        
        vis[get_out_i][get_out_j]=true;

        cout<<get_out_i<<" "<<get_out_j<<endl;

        for(int i=0;i<4;i++){
            //childs of get out 
            int child_getout_i=get_out_i+movement[i].first;
            int child_getout_j=get_out_j+movement[i].second;
            
            if(valid(child_getout_i,child_getout_j)==true&&vis[child_getout_i][child_getout_j]==false){
                q.push({child_getout_i,child_getout_j});
                vis[child_getout_i][child_getout_j]=true;
            }
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
    bfs(src_i,src_j);





return 0;
}