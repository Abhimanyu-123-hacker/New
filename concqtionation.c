#include<stdio.h>
int main(){
    char a[50],b[50],c[100];
    int i,j;
    printf("enter the first string : ");
    gets(a);
    printf("enter the second string :");
    gets(b);
    i=j=0;
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0'){
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
    printf("\nconcatinated string : %s",c);
    return 0;
}