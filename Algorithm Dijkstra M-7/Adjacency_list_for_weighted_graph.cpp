#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> adjency_list[n];

    while (e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adjency_list[a].push_back({b,c});
        adjency_list[b].push_back({a,c});

    }
    
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(auto p:adjency_list[i]){
            cout<<p.first<<","<<p.second<<"   ";
        }
        cout<<endl;
    }

return 0;
}