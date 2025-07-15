#include<stdio.h>
int main(){
    system("cls");

    int a,b,c,d,e,s,p;
    printf("input the values of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=s/5;
    printf("sum of marks=%d\npercentage of marks=%d",s,p);
    return 0;

}