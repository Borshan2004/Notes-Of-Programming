#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l(10,100);

    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*it<<endl;
    // }

    //without using the index
    for(int value :l){
        cout<<value<<endl;
    }





    return 0;
}