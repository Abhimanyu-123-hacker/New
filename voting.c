#include<stdio.h>
#include<stdlib.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    
    if (age>18)
    
    printf("eligible for voting");
    else 
    printf("not eligible for voting");
    
    return 0 ;
}