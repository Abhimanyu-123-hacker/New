#include<stdio.h>//toogle each character of string.
#include<string.h>
#include<stdlib.h>
int main(){
    char str[30];
    int alpha=0,digit=0,symbol=0;
    printf("enter string");
    gets(str);
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=48 && str[i]<=57)
        digit++;
        else if(str[i]>=97 && str[i]<=122)
        alpha++;
        else
        symbol++;
    }
    printf("alphabets are %s\n",alpha);
printf("total digit are %d",digit);
printf("total symbol are %d",symbol);
    return 0;
}