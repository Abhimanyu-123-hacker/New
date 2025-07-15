#include<stdio.h>//wap to print the fibonacci series 

int main(){
 int a=0,b=1,n,c;

 printf("enter the number");
 
 scanf("%d",&n);
 printf("%d %d ",a,b);

 
 for(int i=3;i<=n;i++){
c = a+b;
printf(" %d",c);

a=b;
 b=c;

 }  return 0;
}