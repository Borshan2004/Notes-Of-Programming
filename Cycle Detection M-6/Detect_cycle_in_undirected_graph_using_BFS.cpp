//parent[child] means that child ar parent is the value that is saved  
#include <bits/stdc++.h>
using namespace std;

vector<int> adency_l[10005];

bool vis[10005];

int parent[10005];
bool flag;

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) 
    {
        int get_out = q.front();
        q.pop();
        
        // this is the main logic and here i check is the child node is visited and it is not return to its parent node
        if(vis[get_out]==true&&parent[get_out]!=get_out){
            flag=true;
        }
        
        for (int child : adency_l[get_out])
        {                                    
                                            
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                
                //parent[child] means that child ar parent is the value that is saved 
                parent[child]=get_out;

            }
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
    bfs(0);


    if(flag==true){
        cout<<"CYCLE";
    }
    else{
        cout<<"Not cycle";
    }
    return 0;
}