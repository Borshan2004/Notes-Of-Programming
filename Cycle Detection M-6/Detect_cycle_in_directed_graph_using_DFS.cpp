#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> adj_list[105];
bool vis[105];
bool vis_path[105];
bool flag;

void dfs(int src)
{

    vis[src] = true;
    vis_path[src]=true;

    for (int child : adj_list[src])
    {
        if(vis[child]==true&&vis_path[child]==true){
            flag=true;
        }

        if (vis[child] == false)
        {
            dfs(child);
        }
    }
    // at the end there is written vis_path=false because it means that there is no way to go inthe directed we return 
   // ferot cholay asa 
   //when there is no children for a node then it will return
    vis_path[src]=false;
}

int main()
{
    flag=false;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(vis_path, false, sizeof(vis_path));
    dfs(0);

     if(flag==true){
        cout<<"CYCLE";
    }
    else{
        cout<<"Not cycle";
    }

    return 0;
}