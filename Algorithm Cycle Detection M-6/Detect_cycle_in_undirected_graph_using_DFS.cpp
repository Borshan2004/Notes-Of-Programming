//parent[child] means that child ar parent is the value that is saved  
#include <bits/stdc++.h>
using namespace std;

vector<int> adency_l[10005];

bool vis[10005];

int parent[10005];
bool flag;

void dfs(int src){
    vis[src]=true;

    for(int x:adency_l[src]){


        if(vis[x]==true&&parent[src]!=x){
            flag=true;
        }

         if(vis[x]==false){
            parent[x]=src;
            dfs(x);
         }

    }
}                           

int main()
{

  
    int n, e;
    cin >> n >> e;

    flag=false;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adency_l[a].push_back(b);
        adency_l[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent,-1,sizeof(parent));
    dfs(0);


    if(flag==true){
        cout<<"CYCLE";
    }
    else{
        cout<<"Not cycle";
    }
    return 0;
}