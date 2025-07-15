#include<Stdio.h>
int table(int n){
   static int i=1;
    if(i<=10){
     printf("%d*%d=%d\n",n, i ,n*i);
     i++;
     table(n);
       
    }return table;
} 
int main (){
    int n;
    printf("enter the number n");
    scanf("%d",&n);
    table(n);
    return 0;
}