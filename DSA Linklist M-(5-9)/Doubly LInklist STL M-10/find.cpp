#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>l={10,30,40,60,78490,36,234};

    auto it=find(l.begin(),l.end(),300);

    if(it==l.end()){
        cout<<"Not found";
    }
    else{
        cout<<"found";
    }


    return 0;
}