#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    // if(a<b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    cout << min({3,5,7,10,12}) << endl;
    cout << max({23,45,678,88,90}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}