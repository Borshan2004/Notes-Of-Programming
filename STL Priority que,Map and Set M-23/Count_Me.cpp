#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        map<string,int>mp;
        string word;
        int count=0;

        string maximum_s;
        while (ss>>word)
        {
            mp[word]++;
            if(mp[word]>count){
                count=mp[word];
                maximum_s=word;

            }
            
        }
        cout<<maximum_s<<" "<<count<<endl;
        
    }





return 0;
}