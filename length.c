#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string of your wish :");
    gets(str);
    printf("\nThe length  of string is %d",strlen(str));
    return 0;
}