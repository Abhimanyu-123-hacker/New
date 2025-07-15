#include<stdio.h>
int main(){
    int n,i,factorial;
    printf("enter the value of n");
    scanf("%d",&n);
    while( n!=0){
        i=1;
    if(i<n){
        factorial=factorial*i;
       
        i++;
    }printf("%d",factorial);






    }
    
    return 0;
}