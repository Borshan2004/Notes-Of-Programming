#include<bits/stdc++.h>
using namespace std;


class myQue{
    public:
    list<int>l;
    


    void push(int val){
        l.push_back(val);
    }

    void pop(){
        
        l.pop_front();
    }


    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }

    

    bool empty(){
        return l.empty();
    }

};

int main(){

    myQue que;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        que.push(value);
    }

    while (!que.empty())
    {
        cout<<que.front()<<endl;
        que.pop();
        
    }

    
    

    return 0;
}