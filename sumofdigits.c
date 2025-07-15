#include<stdio.h>
int sumofdigits(int n){
    static int sum =0;
    if(n!=0){
        return n%10+sumofdigits(n/10);
    }
    return sum;
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("sum of digits=%d",sumofdigits(n));
    return 0;
}