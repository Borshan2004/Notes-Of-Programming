#include<bits/stdc++.h>
using namespace std;

vector<int> adjency_l[100005];

bool vis[100005];
int level[100005];

// first the parent level will be 0

void bfs(int src){

    queue<int>q;
    q.push(src);
    vis[src]=true;
    //here also we need to update the level
    level[src] =0;

    while (!q.empty())
    {
        int get_out=q.front();
        q.pop();

        for(int child:adjency_l[get_out]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                
// after the parent level the child level will  parent level + 1
                level[child]= level[get_out]+1;
            }
        }
    }
    

}


int main(){

    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;

        adjency_l[a].push_back(b);
        adjency_l[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int src,target_level;
    cin>>src;
    cin>>target_level;
    bfs(src);

    cout<<level[target_level];

   













return 0;
}

