#include<stdio.h>
int main(){
    char a[50];
    int i;
    printf("\n enter your  name ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        printf("\n%c",a[i]);
        i++;
    }
    return 0;

}