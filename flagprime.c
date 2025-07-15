#include<stdio.h> //wap tocheck number is prime or not
int main(){
    int i=2,num,flag=0;
    printf("enter the value of n");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i ==0){
            flag=1;
            break;

        }
        i++;
    }
    if(flag==0)
    printf("number is prime");
    else
    printf("number is not prime");

    return 0;
}