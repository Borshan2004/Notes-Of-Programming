#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v1={1,2,3,4,22,5,6,2,3,55};
    vector<int>v2={111,111,111,111,111};
    

    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }

    // v2.pop_back();
    // v2.push_back(100);
    // v2.push_back(10);

    // v2.insert(v2.begin()+4,122);
    // v2.insert(v2.begin()+6,105);


    v1.insert(v1.begin()+6,v2.begin(),v2.end());
    v1.erase(v1.begin()+3,v1.begin()+11);

    for(int x:v1){
        cout<<x<<" ";
    }



    return 0;

}