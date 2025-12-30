#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>l={12,315,12,12,532,5,56,21,12,35,61,21,21,10,10,21,2,25};
    //first need to sort
    l.sort();
    l.unique();//by using this function you can only find the unique element

    for(int val:l){
        cout<<val<<endl;
    }

    return 0;
}