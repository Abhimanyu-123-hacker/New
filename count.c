#include<stdio.h>
int main(){
    char a[50];
    int i;
    printf("\nenter your name ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    i++;
    printf("\ntotal number of characters=%d",i);
    return 0;
}