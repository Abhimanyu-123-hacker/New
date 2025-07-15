#include<stdio.h>
int main(){
    system("cls");
    float f,cel;
    printf("enter temp.in fahrenheit");
    scanf("%f",&f);
    cel=(f-32)*5/9;
    printf("celsius=%.2f",cel);
    return 0;
}