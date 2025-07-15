#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,largest;      
    printf("enter the value of a nad b");
    scanf("%d%d",&a,&b);
    largest=(a>b)? a:b;
    printf("largest value is %d",largest);
    
    return 0;

}