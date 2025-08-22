#include<bits/stdc++.h>
using namespace std;
int main(){

    //first take take the node and edges
    int n,e;
    cin>>n>>e;


    // then make the vector of pair
    
    vector<pair<int,int>> edge_l;

    //then store the edges on the pair

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        edge_l.push_back({a,b});
    }

    
    for(pair<int,int>p:edge_l){
        cout<<p.first<<" "<<p.second<<endl;
    }

return 0;
}