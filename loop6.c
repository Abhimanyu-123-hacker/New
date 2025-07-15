#include<stdio.h>
#include<stdlib.h>//wap to print the sum of the alphabets in ASCII form
int main (){
    int sum=0;
    
    
    for(char c='a';c<='z';c++){

        sum +=c;
    }
    printf("sum of ASCII values from 'a'to 'z'=%d",sum);
    return 0;
}