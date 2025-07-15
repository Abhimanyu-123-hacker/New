#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if (ch=='A' && ch=='a'){
        printf("it is a vowel" );
    }else if(ch=='e' && ch=='E'){
        printf("it is a vowel");
    }else if(ch=='i' && ch=='I'){
        printf("it is a vowel ");
    } else if (ch=='o' && ch=='O'){
        printf("it is a vowel ");
    }else if (ch=='u' && ch=='U'){
        printf("it is a vowel ");
    }else
    printf("it is a consonant");
    return 0;
}