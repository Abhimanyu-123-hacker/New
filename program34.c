#include<stdio.h>
int main()
{
    system("cls");
    int n,sum=0;
    printf("enter the value of five digit number n");
    scanf("%d",&n);
    sum += n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    sum += n%10;

    
     printf("sum=%d",sum);
     return 0;
}