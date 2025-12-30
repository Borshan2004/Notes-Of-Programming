#include<bits/stdc++.h>
using namespace std;
int main(){

// the fist one value of the map is key and the second one is the value
//map<key,value>
//syntax is map_name[key]=value
map<string,int>mp;

mp["borshan"]=100;
mp["borno"]=50;
mp["srabon"]=20;

//map a key and value stay like pair 
//it is works as pair of map

for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
// is a value of a key is present to prove that count is used 
//if the value is emty then it return false  else it return true



return 0;
}