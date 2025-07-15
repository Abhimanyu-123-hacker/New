#include<stdio.h>
int main (){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int table=n*i;
        printf("%d ",table);
    }
    return 0;
}