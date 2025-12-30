#include<bits/stdc++.h>
using namespace std;
int main(){


    // list<int>l1={1,2,3,4};
    // list<int>l2(l1);

    // for(int value: l2){
    //     cout<<value<<endl;
    // }


    // int arr[10]={10,20,30,40,50};
    // list<int>l(arr,arr+5);
    // for(int val:l){
    //     cout<<val<<" ";
    // }


    vector<int>vt={11,22,33,335};
    list<int>l(vt.begin(),vt.end());

    // l.clear();
    // cout<<l.size()<<endl;


    for(int val:l){
        // if(l.empty()){
        //     cout<<"empty";
        // }
        l.resize(10,102);
        cout<<val<<" ";
     }
    return 0;
}