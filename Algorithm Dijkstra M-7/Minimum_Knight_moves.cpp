#include <bits/stdc++.h>
using namespace std;
char grid[8][8];
bool vis[8][8];
int level[8][8];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
int n = 8, m = 8;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> get_out = q.front();
        q.pop();
        int get_out_i = get_out.first;
        int get_out_j = get_out.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = get_out_i + d[i].first;
            int cj = get_out_j + d[i].second;

            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[get_out_i][get_out_j] + 1;
            }
        }
    }
}

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        string src, des;
        cin >> src >> des;

        int src_i, src_j, des_i, des_j;

        src_i = src[1] - '1';
        src_j = src[0] - 'a';
        des_i = des[1] - '1';
        des_j = des[0] - 'a';

        bfs(src_i, src_j);
        
        cout << level[des_i][des_j] << endl;
    }

    return 0;
}