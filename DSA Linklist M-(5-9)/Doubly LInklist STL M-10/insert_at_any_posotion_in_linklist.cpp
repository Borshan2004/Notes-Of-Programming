#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l={10,20,40,60,80};
    l.insert(next(l.begin(),3),100);

    for(int val:l){
        cout<<val<<endl;
    }

    return 0;
}