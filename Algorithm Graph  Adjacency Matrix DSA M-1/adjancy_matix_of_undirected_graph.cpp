#include<bits/stdc++.h>
using namespace std;
int main(){

// n and e are node and eges 
int n,e;
cin>>n>>e;

int adjancy_m [n][n];

// rule of use memset
// (who's value is store, what is store,size of the store)

memset(adjancy_m,0,sizeof(adjancy_m));


// make the digonal of the matrix 1 as the rule of adjancy matrix

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            adjancy_m [i][j]=1;
        }
    }
}

// take the input of the conection and make the adjancy matrix
//we have to run the loop accorfing to the edges
for(int i=0;i<e;i++){

    int a,b;
    cin>>a>>b;

    adjancy_m [a][b]=1;
    adjancy_m [b][a]=1;// repeat for indirected matrix

}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adjancy_m[i][j]<<" ";
    }
    cout<<endl;
}







return 0;
}