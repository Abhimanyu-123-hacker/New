#include<stdio.h>
int main(){
    char a[50],b[50];
    printf("enter a string :");
    gets(a);
    int i;
    i=0;
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("\ncopied string is :%s",b);
    return 0;
    
}