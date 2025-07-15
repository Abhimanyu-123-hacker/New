#include<stdio.h>
int main(){ 
    system("cls");
    int n;
    printf("enter the value of rows");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}