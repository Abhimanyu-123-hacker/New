#include<stdio.h> //count number of digits in a given number without using any built-in function.
#include<math.h> 
int main(){
    int num,count=0;
    printf("enter number:");
    scanf("%d",&num);
    int temp =num;
    while(num !=0)
    {
        num=num/10;
        count++;
    }
    printf("number of diigits in %d is %d",temp,count);


    return 0;
}