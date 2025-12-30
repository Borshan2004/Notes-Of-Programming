#include <bits/stdc++.h>
using namespace std;
int row, col;
char grid[105][105];
bool vis[105][105];
pair<int, int> parent[105][105];

vector<pair<int,int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= col)
        return false;
    return true;
}

void bfs(int src_i, int src_j)
{
    queue<pair<int, int>> q;
    q.push({src_i, src_j});
    vis[src_i][src_j] = true;

    while (!q.empty())
    {
        pair<int, int> get_out = q.front();
        q.pop();
        int get_out_i = get_out.first;
        int get_out_j = get_out.second;

        for (int i = 0; i < 4; i++)
        {
            int child_get_out_i = get_out_i + d[i].first;
            int chlid_get_out_j = get_out_j + d[i].second;

            if (vis[child_get_out_i][chlid_get_out_j] == false && valid(child_get_out_i, chlid_get_out_j) == true && grid[child_get_out_i][chlid_get_out_j] != '#')
            {
                q.push({child_get_out_i, chlid_get_out_j});
                vis[child_get_out_i][chlid_get_out_j] = true;
                parent[child_get_out_i][chlid_get_out_j] = {get_out_i, get_out_j};
            }
        }
    }
}

int main()
{

    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    int src_i, src_j, dis_i, dis_j;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 'R')
            {
                src_i = i;
                src_j = j;
            }
            else if (grid[i][j] == 'D')
            {
                dis_i = i;
                dis_j = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(src_i, src_j);


    if (vis[dis_i][dis_j] == true)
    {
        int child_node_i = dis_i;
        int child_node_j = dis_j;

        while (1)
        {

            pair<int, int> p = parent[child_node_i][child_node_j];
            child_node_i = p.first;
            child_node_j = p.second;

            if (grid[child_node_i][child_node_j] == 'R')
            {
                break;
            }
            grid[child_node_i][child_node_j] = 'X';
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << grid[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
         for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << grid[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}