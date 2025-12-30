#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>v={10,20,30,40,50,2,2,45,3,2,1,5,2};

    auto it=find(v.begin(),v.end(),5);

    if(it==v.end()){
        cout<<"Value is not matched";
    }
    else{
        cout<<"Value is matched";
    }

    return 0;
}