#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
     system("cls");
    char str1[100],str2[100];
    printf("enter the string :");
    gets(str1);
    strlwr(str1);
    strcpy(str2,str1);
    strrev(str1);
   int  strcmp(str1,str2);
   if(strcmp(str1,str2)==0)
   printf("the string is pallindrome");
   else
   printf("the string is not pallindrome");

    return 0;
}