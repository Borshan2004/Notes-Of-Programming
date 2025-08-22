#include<bits/stdc++.h>
using namespace std;
int main(){

    //first take take the node and edges
    int n,e;
    cin>>n>>e;

    //then take array of vector
    // array of vector = data_type  array 

    vector<int> adj_l[n];

    //then push the conected value to the in the each index of the 
    //array according its rule 

    while (e--)
    {
        int a,b;
        cin>>a>>b;

        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }

    for(int i=0;i<n;i++){
        cout<<i<<"--> ";

       for(int x:adj_l[i]){
        cout<<x<<" ";
       }
       cout<<endl;
    }
    

return 0;
}