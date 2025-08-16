#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    vector<int>v;
    vector<int>v1(n);
    vector<int>v2(n);

    for(int i=0;i<n;i++){
        cin>>v1[i];
       
        
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
       
        
    }
     

    v.insert(v.begin(),v2.begin(),v2.end());
    v.insert(v.begin()+n,v1.begin(),v1.end());

    for(int x:v){
        cout<<x<<" "; 
    }



    return 0;
}