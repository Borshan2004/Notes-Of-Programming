#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){// & is used for referening the pointer ->means that it makes the the main function pointer address == funtion pointer address
    cout<<"Function:"<<&p<<endl;
    p=NULL;
 }

int main(){

    int x;
    x=10;
    int* p=&x;
    fun(p);

    cout<<"Main:"<<p<<endl;

    return 0;
}