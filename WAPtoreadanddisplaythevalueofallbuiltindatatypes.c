#include<stdio.h>

int main()
{
    system("cls");
    int x;
    float y;
    double z;
    char ch;
    printf("Enter character value ");
    scanf("%c",&ch);
    printf("Enter integer value ");
    scanf("%d",&x);
    printf("Enter float value ");
    scanf("%f",&y);
    printf("Enter double value");
    scanf("%lf",&z);

    printf("x=%d\n",x);
    printf("y=%f\n",y);
    printf("ch=%c\n",ch);
    printf("z=%lf\n",z);
    return 0;
}