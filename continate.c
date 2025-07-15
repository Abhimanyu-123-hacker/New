#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[50];
    printf("enter the value of first string :");
    gets(s1);
    printf("\nenter the value of second string :");
    gets(s2);
    strcat(s1,s2);
    printf("the string after concatination is : %s",s1);
    return 0;
}