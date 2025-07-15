#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    printf("enter the first string :");
    gets(a);
    printf("enter the second string :");
    gets(b);
    if(strcmp(a,b)==0)
    printf("both strings are equal ");
    else if (strcmp(a,b)>0)
    printf("string a is greater than string b");
    else 
    printf("string b is greater than string a");
    return 0;

    }