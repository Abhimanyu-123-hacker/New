#include<stdio.h>  //wap to find the sum of even numbers
#include<stdlib.h>
int main (){
    int n,sum=0,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        if(i%2==0)
        sum=sum+i;
    }
    printf("%d ",sum);
    return 0;
}