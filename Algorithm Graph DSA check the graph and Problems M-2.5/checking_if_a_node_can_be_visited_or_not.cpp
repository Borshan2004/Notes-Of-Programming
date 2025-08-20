#include<bits/stdc++.h>
using namespace std;

vector<int> adjency_l[100005];

bool vis[100005];

void bfs(int src){

    queue<int>q;
    q.push(src);
    vis[src]=true;

    while (!q.empty())
    {
        int get_out=q.front();
        q.pop();

        for(int child:adjency_l[get_out]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
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
    int src,target;
    cin>>src;
    cin>>target;
    bfs(src);

    if(vis[target]==false){
        cout<<"Not visited";
    }
    else{
        cout<<"Visited";
    }














return 0;
}