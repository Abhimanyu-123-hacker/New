#include<stdio.h>
int main(){
    float a1,a2,a3;
    printf("enter the value of a1 and a2");
    scanf("%f %f",&a1,&a2);
    a3=180-(a1 + a2);
    printf("%f",a3);
    return 0;
}