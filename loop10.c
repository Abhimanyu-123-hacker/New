#include<stdio.h>
#include<stdlib.h>// wap program to print the factorial of a given number 
int main(){
int i,n,factorial ;
printf("enter number");
scanf("%d",&n);

for(int i=1;i<=n;i=i+1){
factorial=factorial*i;
}
printf("%d ",factorial);

 






    return 0;
}