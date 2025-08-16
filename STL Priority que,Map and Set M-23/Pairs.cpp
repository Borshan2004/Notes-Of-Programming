#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>l,pair<string,int>r){
    if(l.first<r.first){
        return true;
    }
    else if(l.first>r.first){
        return false;
    }
    else{
        if(l.second>r.second){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){

int n;
cin>>n;
vector<pair<string,int>>v;
for(int i=0;i<n;i++){

    string name;
    int roll;

    cin>>name;
    cin>>roll;

    v.push_back({name,roll});
}

sort(v.begin(),v.end(),cmp);

for(int i=0;i<n;i++){

    cout<<v[i].first<<" "<<v[i].second;
    cout<<endl;

}






return 0;
}