#include<bits/stdc++.h>
using namespace std;
int main(){

map<string,int>mp;

mp["borshan"]=100;
mp["borno"]=50;
mp["srabon"]=20;

// is a value of a key is present to prove that count is used 
//if the value is emty then it return false  else it return true



if(mp.count("hamim")){
    cout<<"Present";
}
else{
    cout<<"Not present";
}


return 0;
}