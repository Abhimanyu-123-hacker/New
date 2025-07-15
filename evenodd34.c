// wap to check the given number is even or odd using ternary operator 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    (n%2==0)?printf("even"):printf("odd");
    return 0;

}