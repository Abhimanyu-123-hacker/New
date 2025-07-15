#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    int i,j,flag=0;

    printf("\nenter the string");
    gets(a);
   j=0;
for (i=strlen(a)-1;i>=0;i--){
    a[i]=b[j];
    j++;
}
b[j]='\0';
for(i=0;i<=strlen(a);i++){
   if(a[i]!=b[i]){
        flag=1;
        break;
    } 

}
if(flag==0)
printf("\nthr given string is pallindrome");
else
 printf("\nthe given sequence is not the pallindrome");
return 0;
}

