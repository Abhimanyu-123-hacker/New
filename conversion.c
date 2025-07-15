// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[50];
//     printf("enter the string in the upper case :");
//     gets(a);
//     printf("the string in the lowercase is %s",strlwr(a));
//     return 0;
// }


// wap to covert upper case letters to lower case letters without using strlwr
#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    int i;
    printf("enter the string in upper case ");
    gets(a);
     i=0;
    while(a[i]!=0){
        a[i]=a[i]+32;
        i++;
    }printf("the string in lower case is %s",a);
    return 0;
}