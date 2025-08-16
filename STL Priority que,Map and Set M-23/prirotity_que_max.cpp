#include<bits/stdc++.h>
using namespace std;
int main(){

//it works like heap
priority_queue<int>pq;
//for maximum when we push the value if it is greater than aothers then it will be  push in the front 
pq.push(10);
pq.push(20);
pq.push(200);


cout<<pq.top()<<endl;
pq.pop();

cout<<pq.top()<<endl;

// when we pop some value it will earese from the front
pq.pop();
cout<<pq.top()<<endl;

return 0;
}