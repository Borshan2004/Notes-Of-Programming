#include<bits/stdc++.h>
using namespace std;

class mystack{

    public:

    vector<int>v;

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }
    
    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        v.empty();
    }

};


int main(){

    mystack st;

    int n;
    cin>>n;

    //take input 

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }

    //for print

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();


    }
    

   



    return 0;
}