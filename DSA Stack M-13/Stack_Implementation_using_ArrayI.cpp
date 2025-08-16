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

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();


    if(st.empty()==false){
        cout<<st.top()<<endl;
        
    }
    else{
        cout<<"empty"<<endl;
    }

    if(st.empty()==false){
        st.pop();
    }
    else{
        cout<<"No value to pop";
    }

   



    return 0;
}