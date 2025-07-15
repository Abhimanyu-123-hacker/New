#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int l,b,perimeter;
    printf("enter the value of l");
    scanf("%d",&l);
    printf("enter the value of b");
    scanf("%d",&b);

    perimeter =2*(l+b);
    printf("perimeter=%d",perimeter);
    return 0;

    }