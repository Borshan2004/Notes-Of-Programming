#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v={1,2,3,2,5,2,1,5,2,3,5,2};

    replace(v.begin(),v.end(),2,100);
    
    for(int x:v){
        cout<<x<<" ";
    }


    return 0;
}