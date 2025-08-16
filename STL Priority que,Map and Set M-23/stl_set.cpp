//it removes duplicate values
//do the sorting also
//it working process is like bst
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.insert(val);

    }

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }



return 0;
}