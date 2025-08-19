#include <bits/stdc++.h>
using namespace std;
// take the adjency list as a global for acceess it in both function
vector<int> adency_l[10005];

// take the vis to check is it called or not
bool vis[10005];

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) //O(n)
    {
        int get_out = q.front();
        q.pop();

        cout << get_out << " ";
 
        //take the child of get_out
        for (int child : adency_l[get_out]) //O(e) -> here only edge times it runs if we deep analyise we can find it
        {                                   // here this loop is not connected as  nested loop so 
                                            // o(n) does not have any effect on it 
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
                              //total time complexity  will be O(n+e)

int main()
{

    // take the input first
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adency_l[a].push_back(b);
        adency_l[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    bfs(0);

    return 0;
}