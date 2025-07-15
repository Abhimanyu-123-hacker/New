#include<stdio.h> //wap to print the series 1,4,9,16,25....n
#include<stdlib.h>
int main(){
 int n,series;
 printf("enter number");
 scanf("%d",&n);

 for(int i=1;i<=n;i=i+1){
    
    series=i*i;
    
 printf("%d ",series);

 }







    return 0;
}