#include<stdio.h>
int main()
{
    system("cls");
    int a;
    float b;
    double c;
    char ch;
  printf("Enter value of character");
    scanf("%c",&ch);

    printf("Enter value of integer");
    scanf("%i",&a);
    printf("Enter value of float");
    scanf("%f",&b);
    printf("Enter value of double");
    scanf("%lf",&c);
  

    printf("a=%d",a);
    printf("b=%f",b);
    printf("c=%lf",c);
    printf("ch=%c",ch);

    return 0;
}