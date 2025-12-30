//when we use the pirotiy que on the dijkstra we have to take the distance first and then the node
//there is no major change ,change will happen only the swap
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjency_list[105];
int dis[105]; 

void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    dis[src]=0;

    while (!pq.empty())
    {
        pair<int,int>get_out=pq.top();
        pq.pop();
        
        int get_out_node=get_out.second;
        int get_out_dis=get_out.first;

        for(pair<int,int>child:adjency_list[get_out_node]){
            int child_node = child.first;
            int child_dis  = child.second;

            if(get_out_dis+child_dis<dis[child_node]){
                dis[child_node]=get_out_dis+child_dis;
                pq.push({dis[child_node],child_node});
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