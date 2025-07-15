// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[50];
//     printf("\nenter the string");
//     gets(a);
//     printf("the reverse string is %s",strrev(a));
//     return 0;
// }
//without using the strrev()function
#include<stdio.h>
#include<string.h>
int main(){
char a[50],b[50];
int i,j;
printf("\nenter the string:");
gets(a);
j=0;
for(i=strlen(a)-1;i>=0;i--){
    b[j]=a[i];
    j++;
}
b[j]='\0';
printf("\nreverse string is %s",b);
return 0;

}