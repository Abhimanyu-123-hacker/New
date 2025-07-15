#include<stdio.h>    //wap to find the sum of numbers from 1 to n
#include<stdlib.h>

int main(){
int i,n,sum=0;
printf("enter number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum = sum+i ;
}
printf("%d ",sum);

return 0;
}