#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int>v;
    // vector<int>v(5);

    // cout<<v.size()<<endl;

    // vector<int>v1(10,10);
    // vector<int>v2(v1);

    int arr[5]={1,2,3,4,5};
    vector<int>v(arr,arr+5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}