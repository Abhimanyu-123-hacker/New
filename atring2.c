#include<stdio.h>
 int main(){
    char str1[30],str2[30];
    printf("enter string-1");
    gets(str1);
    printf("enter string-2");
    gets(str2);
    int x=strcmp(str1,str2);
   if(x==0)
   printf("both are same ");
   else if(x==-1)
   printf("string1 is less then string 2");
   else
   printf("string1 is greater than string 2");
    
    return 0;
 }