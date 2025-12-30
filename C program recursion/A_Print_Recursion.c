#include<stdio.h>
void h(int n,int i){
if(i==n){
    return;
}
printf("I love Recursion\n");
h(n,i+1);

}

int main()
{

    int n;
    scanf("%d",&n);
    h(n,0);

return 0;
}
    