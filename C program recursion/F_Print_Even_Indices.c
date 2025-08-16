#include<stdio.h>
void even_print(int arr[],int n,int i){

if(i==n){
    return;
}

even_print(arr,n,i+1);
if(i%2==0){
    printf("%d ",arr[i]);
}

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
even_print(arr,n,0);

return 0;
}
    