#include<stdio.h>
int main(){
    int x=67;
  int *ptr=&x;
  *ptr=45;
  
  printf("%d",x);

 
    return 0; 
}