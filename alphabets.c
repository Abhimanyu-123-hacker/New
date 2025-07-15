#include<stdio.h>//wap to count total number of vowels and consnants in string.
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    system("cls");
    char str[100];
    int vowel=0,cons=0;
    printf("enter string");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(isalpha(str[i])){
            strlwr(str);
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'){
                vowel ++;
            }else{
                cons++;
            }
        }
    }
    printf("total vowel=%d\n",vowel);
    printf("total consonants=%d\n",cons);

return 0;
}