// to count the nmber of digits 
#include<stdio.h>
int  numbercount(int n){
   static  int count=0;
    if(n!=0){
        count++;
        numbercount(n/10);
        

    }
    return count;
}int main(){
    int n,count;
    printf("enter the number");
    scanf("%d",&n);
   
    
    printf("the number of digits in number is %d",numbercount(n));
    return 0;
}

