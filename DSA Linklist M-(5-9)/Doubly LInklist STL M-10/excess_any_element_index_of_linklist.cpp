#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>l={10,20,30,49,504,43};
    cout<<l.back()<<endl;
    cout<<l.front()<<endl;
    cout<<*next(l.begin(),1);

    return 0;
}