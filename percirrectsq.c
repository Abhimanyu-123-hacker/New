#include<stdio.h>
#include<math.h>
int main(){
    system("cls");
    float l,b,side,r,p;
    printf("enter the value of r");
    scanf("%f",&r);
    p=2*3.13*r;

    printf("perimeter of circle\n=%.2f",p);

    printf("enter the value of l and b");
    scanf("%f%f",&l,&b);
    p=2*(l+b);

    printf("perimeter of rectangle=%.2f\n",p);

    printf("enter the value of side");
    scanf("%f",&side);
    p=4*side;

    printf("perimeter of square=%.2f",p);
    return 0;
}