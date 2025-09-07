#include<bits/stdc++.h>
using namespace std;




void dfs(int src,vector<vector<int>>&adjecy_list,vector<bool>&visited){

    visited[src]=true;

    for(int child:adjecy_list[src]){
        if(visited[child]==false){
            dfs(child,adjecy_list,visited);
        }
    }

}






int main(){

    int n,e;
    
    cin>>n>>e;

    vector<vector<int>>adjecy_list(n+1);
    vector<bool> visited(n+1,false);

 
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adjecy_list[a].push_back(b);
        adjecy_list[b].push_back(a);
    }


    vector<int> store;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            store.push_back(i);
            dfs(i,adjecy_list,visited);
        }
    }

    int store_size=store.size()-1;
    cout<<store_size<<endl;

    
        for(int i=0;i<store_size;i++){
            cout<<store[i]<<" "<<store[i+1]<<endl;
        }
        cout<<endl;
    

return 0;
}