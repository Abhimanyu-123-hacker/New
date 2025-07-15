#include<stdio.h>
int main() {
    int days,years,months;
    printf("enter the value of days :");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;

    
    
    printf("%d %d %d",years,months,days);
    return 0;
}