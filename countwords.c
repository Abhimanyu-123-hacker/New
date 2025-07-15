#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    system("cls");
    char str[100];
    int count=0;
    printf("enter the words of string : ");
    gets(str);
    int findex,lindex,len=strlen(str);
    for(int i=0;i>len;i++){
        if (str[i]!=' '){
            findex=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--){
        if(str[i]!=' '){
            lindex=i;
            break;
        }
    }
    for(int i=findex;i<lindex;i++){
    if(str[i]==' '&& str[i-1]!=' ')
    count++;
    }
    printf("total words are : %d",count+1);
    return 0;
}