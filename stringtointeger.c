// #include<stdio.h>
// #include<string.h>

//  int main(){
//     char str[30];
//     printf("enter string");
//     gets(str);
//     int num =atoi(str);
//     printf("%d",num);
//     return 0;
//  }
                                 

// wao to CCESS EACH CHrarter of a given string one by one 

#include<stdio.h>
#include<string.h>

 int main(){
    char str[30];
    printf("enter string");
    gets(str);
    for(int i=0;i<strlen(str);i++){
    printf("%c ",str[i]);
    }
    return 0;
 }
                                 