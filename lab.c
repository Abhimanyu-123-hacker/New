//count number of digits in a given number using built-in function
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int digits=(int) log10(num)+1;
    printf("number of digits in %d is %d",num,digits);
    return 0;
}