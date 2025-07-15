#include<stdio.h>//wap to find the sum of first and last digit
#include<math.h>
int main(){
    int n,fd,ld;
    printf("enter number");
    scanf("%d",&n);
    int d=(int)log10(n);
    fd=n/pow(10,d);
    ld=n%10;
    
    printf("sum of  last digit and first digit of %d is %d",n,ld+fd);
    
    return 0;
}