#include<stdio.h>
#include<string.h>
int main(){
    char s2[30]= "ram";
    char s1[30];
    strcpy(s1,s2);
    printf("string s1 is %s",s1);
    return 0;

}