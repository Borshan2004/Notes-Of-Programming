#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l={12,23,21,12,334,12,342,3423};
    l.remove(12);

    for(int val:l){
        cout<<val<<endl;
    }


    return 0;
}