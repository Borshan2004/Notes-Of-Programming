 #include<bits/stdc++.h>
 using namespace std;
 int main(){


    int N,Q;
    cin>>N>>Q;
    vector<long long int>v(N+1);     //i = 1 so the N+1
    for(int i=1;i<=N;i++){
        cin>>v[i];
    }

    vector<long long int>pre_sum(N+1);
    pre_sum[1]=v[1];
    for(int i=2;i<=N;i++){
         
        pre_sum[i]=pre_sum[i-1]+v[i];

    }

    while (Q--)
    {   
        long long int l,r;
        long long int sum;
        cin>>l>>r;
        if(l==1){
            sum=pre_sum[r];
        }
        else{
            sum=pre_sum[r]-pre_sum[l-1];
        }
        cout<<sum<<endl;
    }
    


    return 0;
 }