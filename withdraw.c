#include<stdio.h>
int main(){
    int x;
    float  balance,initial_balance;
    printf("enter the value of x and initial_balance");
    scanf("%d %f",&x,&initial_balance);
    if(x%5==0  && x<balance){
        
        balance=initial_balance-(x+0.50);

        printf("%d %.2f",x,balance);

    }
    else
    printf("%.2f",initial_balance);

    
    return 0 ;
}