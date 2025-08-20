
//first print  the node value and then print the parent of the node
#include<bits/stdc++.h>
using namespace std;

vector<int> adjency_l[100005];

bool vis[100005];
// int level[100005];
int parent[100005];


void bfs(int src){

    queue<int>q;
    q.push(src);
    vis[src]=true;
    parent[src]=-1;
    // level[src] =0;

    while (!q.empty())
    {
        int get_out=q.front();
        q.pop();
        // for the source node there is no parents


        for(int child:adjency_l[get_out]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                

                // level[child]= level[get_out]+1;


                // to do this we have to store the parent path
                parent[child]=get_out;
            }
        }
    }
    

}


int main(){

    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;

        adjency_l[a].push_back(b);
        adjency_l[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    //we have to take the parent array -1 first
    memset(parent,-1,sizeof(parent));
    int src,target_destination;
    cin>>src;
    cin>>target_destination;
    bfs(src);

    int node=target_destination;

    // when we print the path we must start from out destination of the input /the last position 
    // and after printing the destination then print the parent of the destination and goes for at the fist of the parent
    vector<int>path;

    while (node!=-1)
    {
        path.push_back(node);
        //calling the distination parent
        node= parent[node];

    }

    
    reverse(path.begin(),path.end());
    for(int x:path){
        cout<<x<<" ";
    }
    


    

   













return 0;
}

