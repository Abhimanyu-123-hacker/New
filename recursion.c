#include<stdio.h>
void printseries(int n){
    if(n!=0){
        printseries(n-1);
        printf("%d ",n);
    }
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printseries(n);
    return 0;
}