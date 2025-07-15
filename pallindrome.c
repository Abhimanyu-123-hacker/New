//wap to check whether the given number is pallindrome or not 
#include<stdio.h>
int main(){

    int n,rev=0;
    printf("enter number");
    scanf("%d",&n);
    int temp =n;
    while(n!=0){
        int rem =n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp == rev)
    printf("number is pallindrome");
    else
    printf("number is not pallindrome");
    return 0;
}
