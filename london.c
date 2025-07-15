#include<stdio.h>//wap to find the sum of first and last digit
#include<math.h>
int main(){
    int n,count;
    printf("enter number");
    scanf("%d",&n);
  int ld=n%10;
    n=n/10;
    count=(int)log10(n);
    int p=1;
    for(int i=1;i<=count;i++)
    {
      p=p*10;
    }
   int fd=n/p;
    int rm=n%p;
    n=ld*p*10+rm*10+fd;
    printf("after swapping n is =%d",n);
    
    return 0;
}