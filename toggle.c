#include<stdio.h>//toogle each character of string.
#include<string.h>
#include<stdlib.h>
int main(){
    char str[30];
    printf("enter string");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
    }
    printf("toggle string is %s",str);
    return 0;
}