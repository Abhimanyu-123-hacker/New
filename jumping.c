#include<stdio.h>
int main()
{
 int x;
 abc:
 printf("enter number");
 fflush(stdin);
   int z =scanf("%d",&x);
   if(z==0)
   goto abc;
    printf("x=%d",x);

      return 0;
}