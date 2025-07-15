#include<stdio.h>
int main(){
    int num,cube;
    printf("enter number :");
    scanf("%d",&num);
    if(num>0)
    {
        cube=num*num*num;
        printf("cube of %d is %d",num,cube);
    }

    return 0;
}