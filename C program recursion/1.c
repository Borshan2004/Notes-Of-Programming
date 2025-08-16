#include<stdio.h>

void one_to_n(int i){
    if(i==0){
        return;
    }
printf("%d\n",i);
one_to_n(i-1);


}



int main()
{
    int i=5;
    one_to_n(i);

    
return 0;
}
    