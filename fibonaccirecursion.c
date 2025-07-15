#include<stdio.h>
 void fibonacci(int n){
    static int a=0,b=1;
    if(n!=0){
    printf("%d ",a);
    int c=a+b;
    a=b;
    b=c;
    fibonacci(n-1);
    }

}
int main(){
   
    fibonacci(5);
    return 0; 
}