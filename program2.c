#include<stdio.h>
int*p;
void show(){
    int x=10;
    p=&x;
}
int main(){
    show();
    printf("%d",*p);//here pointer become dangling pointer
    return 0;



}