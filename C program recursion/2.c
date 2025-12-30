#include<stdio.h>

void print_arry(int arr[],int n,int i){

    if(i==n){
        return;
    }

    printf("%d ",arr[i]);
    print_arry(arr,n,i+1);

}

int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    print_arry(arr,n,0);
return 0;
}
    