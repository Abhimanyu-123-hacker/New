#include<stdio.h>
int main(){
    int x=10;
    int*ptr =&x;
    *ptr=20;
    printf("x=%d\n",x);
    printf("value o f pointer=%d\n",ptr);
     *ptr =ptr+1;
    printf("value of pointer=%d ",ptr);  
    return 0;
}