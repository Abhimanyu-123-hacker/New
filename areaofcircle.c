#include<stdio.h>
int main(){
    system("cls");
    float r,a,p,length,width,side;
    printf("enter the value of r");
    scanf("%f",&r);
    a=3.141*r*r;
    p=2*3.14*r;

    printf("area of circle=%f\n perimeter of circle=%f",a,p);
    
    printf("enter the sides of square");
    scanf("%f",&side);
    a=side*side;
    p=4*side;
    
    printf("area of square =%f\nperimeter of square = %f\n",a,p);
printf("enter length and width");
scanf("%f%f",&length,&width);
a= length*width;
p=2*(length+width);
printf("area of rectangle=%f\nperimerter of rectangle=%f",a,p);





    return 0;
}