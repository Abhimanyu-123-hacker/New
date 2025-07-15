#include<stdio.h>
int main()
{
    system("cls");
    int n,sum,a,b,c,d,e;
    printf("enter the value of five digit number n");
    scanf("%d",&n);
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;

    sum=a+b+c+d+e;
     printf("sum=%d",sum);
     return 0;
}