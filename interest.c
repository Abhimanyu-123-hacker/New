#include<stdio.h>
void message(void);
int getsimpleinterest(void);
int main(){
    int si=getsimpleinterest();
    printf("simple interest=%d",si);
    return 0;
}
int getsimpleinterest(void){
    int P,R,T;
    printf("enter P,R and T");
    scanf("%d%d%d",&P,&R,&T);
    return (P*R*T)/100;
}