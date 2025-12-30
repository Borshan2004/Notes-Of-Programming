#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l={10,20,30,40,50};
    l.push_back(500);//tail
    l.push_front(599);//head


    for(int val:l){
        cout<<val<<endl;
    }

    return 0;
}