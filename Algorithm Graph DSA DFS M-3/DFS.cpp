#include <bits/stdc++.h>
using namespace std;

vector<int> adjancy_list[10005];
bool vis[10005];

void dfs(int src)
{ // work like preorder

    // base
    // we dont need any base case because after finish the calling of
    // all node the dfs funtion will close automitically

    cout << src << " ";
    vis[src] = true;
    for (int child : adjancy_list[src])
    {   // then we need to go the adency list of index src and do the operations
        //we need to check who is connected with whom and how many ways
        if (vis[child] == false)
        {
            dfs(child);
            vis[child] = true;
        } // when there is no work for a function then it will retun by itself
          // after return to example "A" Funtion then A will try to find
          // another way if get then go that way else return at end the funtion
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
    dfs(0);

    return 0;
}
