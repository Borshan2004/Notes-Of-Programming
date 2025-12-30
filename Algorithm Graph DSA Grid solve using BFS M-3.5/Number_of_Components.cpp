// the number of disconnected graph is called component
#include <bits/stdc++.h>
using namespace std;

vector<int> adjancy_list[10005];
bool vis[10005];

void dfs(int src)
{ 

    
    vis[src] = true;
    for (int child : adjancy_list[src])
    {   
        if (vis[child] == false)
        {
            dfs(child);
            vis[child] = true;
        } 
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjancy_list[a].push_back(b);
        adjancy_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    
    int cnt=0;
    
    for(int i=0;i<n;i++){
    if(vis[i]==false)
    {
        dfs(i);
        cnt++;
    }
    }

    cout<<cnt;
    

    return 0;
}
