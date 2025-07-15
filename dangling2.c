#include<stdio.h>
int main(){
    int*ptr;{
    int x=100;
    ptr=&x;

}
printf("%d",*ptr);//dangling pointer
return 0;
}