#include<stdio.h>
#include<stdlib.h>//wap to program to print the sum of 1+2+3+4+.....+n
int main(){
    int n,i,sum=0;
    printf("enter number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;}
        printf("%d ", sum);
    
return 0;
}