class Solution {
  public:
    vector<int> adjency_list[100005];
    bool vis[100005];
    int parent_node[100005];
    bool flag;
    
    void dfs(int src){
        vis[src]=true;
        
        
        for(int child:adjency_list[src]){
            if(vis[child]==true&&parent_node[src]!=child){
                flag=true;
            }
            if(vis[child]==false){
                parent_node[child]=src;
                dfs(child);
            }
        }
    }
    
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        for (int i = 0; i < edges.size(); ++i) {
    int u = edges[i][0];
    int v = edges[i][1];
    adjency_list[u].push_back(v);
    adjency_list[v].push_back(u);
}
        memset(vis,false,sizeof(vis));
        memset(parent_node,-1,sizeof(parent_node));
        for (int i = 0; i < V; i++) {
    if (!vis[i]) {
        dfs(i);
        if(flag==true){
            return true;
        }
    }
}
        return false;
        
        
    }
};