#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l={10,20,30,50};
    list<int>l1;
    // l1=l;

    l1.assign(l.begin(),l.end());
    for(int val:l1){
        cout<<val<<endl;
    }


    return 0;
}