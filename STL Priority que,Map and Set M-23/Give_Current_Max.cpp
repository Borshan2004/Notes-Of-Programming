#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int marks;
};


class cmp {
    public:
    bool operator()(Student l, Student r) {
        if(l.marks<r.marks){
            return true;
        }
        else if(l.marks>r.marks){
            return false;
        }
        else{
            if(l.age>r.age){
                return true;
            }
            else{
                return false;
            }

        }
            }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for(int i = 0; i < n; i++){
        Student s;
        cin >> s.name >> s.age >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;
    while(q--){
        int cmd;
        cin >> cmd;
        if(cmd == 0){
            Student s;
            cin >> s.name >> s.age >> s.marks;
            pq.push(s);
            Student top = pq.top();
            cout << top.name << " " << top.age << " " << top.marks << endl;
        }
        else if(cmd == 1){
            if(!pq.empty()){
                Student top = pq.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            } 
            else{
              cout << "Empty" << endl;  
            } 
        }
        else if(cmd == 2){
            if(!pq.empty()){
                 pq.pop();
            }
            if(!pq.empty()){
                Student top = pq.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            } 
             else{
              cout << "Empty" << endl;  
            } 
        }
    }

    return 0;
}
