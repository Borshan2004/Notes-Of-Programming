#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjency_list[105];
int dis[105]; 

void dijkstra(int src){
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src]=0;

    while (!q.empty())
    {
        pair<int,int>get_out=q.front();
        q.pop();
        
        int get_out_node=get_out.first;
        int get_out_dis=get_out.second;

        for(pair<int,int>child:adjency_list[get_out_node]){
            int child_node = child.first;
            int child_dis  = child.second;

            if(get_out_dis+child_dis<dis[child_node]){
                dis[child_node]=get_out_dis+child_dis;
                q.push({child_node,dis[child_node]});
            }
        }
    }
    
}

int main(){

    int n,e;
    cin>>n>>e;
    

    while (e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adjency_list[a].push_back({b,c});
        adjency_list[b].push_back({a,c});

    }

    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    dijkstra(0);

    for(int i=0;i<n;i++){
        cout<<i<<"->"<<dis[i];
        cout<<endl;

    }

return 0;
}