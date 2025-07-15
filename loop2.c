#include<stdio.h> //wap to print all the numbers from 1 to N
#include<stdlib.h>
int main(){
    int n;
    printf("enter number");
    scanf("%i",&n);
    for(int i=1;i<=n;i=i+1){
        printf("%i ",i);
    }
    return 0;
}