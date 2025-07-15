// wap to perform the sum of all input numbers until user enter zero.
#include<stdio.h>
int main(){
    int sum=0,num;
    do{
        printf("enter number:");
        scanf("%d",&num);
        sum += num;
    } while(num!=0);
    printf("sum = %d",sum);
    return 0;
}