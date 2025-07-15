#include<limits.h>
#include<stdio.h> 
int main(){
    int n,max=INT_MIN,num;
    printf("enter how many number ou want to read :");
    scanf("%d",&n);
    printf("Enter %d number:",n);
     for(int i=1;i<=n;i++)
     {
        scanf("%d",&num);
        if(num>max) 
        max=num;
     }
     printf(" Max=%d",max);
    return 0;
}